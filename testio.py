#!/usr/bin/env python

PROGRAM = "./hello"
input_data = "10 6\n"
expected_output = "2\n"

input_data = [
  "10 6\n", "893729 2947229\n", "18446744073709551615 125\n",
  "0 0\n", "0 125\n"
]
expected_output = [
  "2\n", "1\n", "5\n",
  "0\n", "0\n"
]




from subprocess import run


i = 0
while i < len(input_data):
  result = run([PROGRAM],
                          input=input_data[i],
                          text=True,
                          capture_output=True)

  if result.stdout != expected_output[i]:
    print(f"Test {i} failed: Expected '{expected_output[i].strip()}"
            f" but got '{result.stdout.strip()}'")
    exit(0)

  i += 1

print(f"All tests passed! ({i} total tests)")

