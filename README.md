# MyWC - Word Count Utility

## Author
**Ndumiso Zondi**

---

## Description
`MyWC` is a simple application that counts the number of lines, words, and characters from the input it receives. The input can be provided via a file or directly from the console. The results are displayed to the standard output.

---

## Features
- Reads input from either standard input or a file using piping.
- Counts:
  - **Lines**: The number of newline characters (`\n`).
  - **Words**: Any sequence of characters separated by whitespace.
  - **Characters**: Every single character, including whitespace and punctuation.

---

## Usage

### Option 1: Pipe input from a file
```bash
cat mytestfile.txt | ./myWC
```
### Option 1: Direct inpute from the console
```bash
# 1 - run the application
./myWC

# 2 - Type or paste text into the console
# 3 - Press Ctrl + D to signal end of input

