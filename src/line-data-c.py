#!/usr/bin/env python3

import json
import subprocess
import sys
from pathlib import Path

def get_formatted_file(filename):
    return subprocess.run(["clang-format", "--style=GNU", filename], capture_output=True, text=True).stdout


def get_body(text, function):
    ndx = text.find(f"\n{function}")
    ndx_bracket_open = ndx + text[ndx:].find("\n{") + 2
    ndx_bracket_close = ndx_bracket_open + text[ndx_bracket_open:].find("\n}")
    return text[ndx_bracket_open+1: ndx_bracket_close]


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print(f"USAGE: {sys.argv[0]} FILE FUNCTION", file=sys.stderr)
        sys.exit(1)

    f = get_formatted_file(sys.argv[1])
    fcn_body = get_body(f, sys.argv[2])

    keywords = ["for", "if", "else", "return", "while", "do"]

    lines = [line.strip() for line in fcn_body.splitlines()]
    comment_lines = [l for l in lines if l[0:2] == "//"]
    for_loops = [l for l in lines if l[0:3] == "for"]
    if_elses = [l for l in lines if l[0:2] == "if" or l[0:4] == "else"]
    returns = [l for l in lines if l[0:6] == "return"]
    exec_lines = [l for l in lines if
                  not (l.startswith('}') or l.startswith('{'))
                  and not l.startswith('//')
                  and len([kw for kw in keywords if l.startswith(kw)]) == 0]

    data = { "functionName": sys.argv[2],
             "fileName": f"{Path(sys.argv[1]).name}",
             "n_linesExecutable": len(exec_lines),
             "n_linesComments": len(comment_lines),
             "n_linesForLoop": len(for_loops),
             "n_ifElseBranches": len(if_elses),
             "n_linesReturnSite": len(returns)
            }

    print(json.dumps(data, indent=4))
