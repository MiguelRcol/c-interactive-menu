# C Interactive Menu

[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](./LICENSE)

A compact, modular command‑line application written in C to practice core C concepts.  
Provides small, focused tools (math operations, age classification, and weather advice) behind a simple interactive menu.

This project is part of my personal learning roadmap, aiming to:

- Demonstrate solid understanding of C fundamentals
- Build professional, modular command-line applications
- Practice clean architecture and maintainable code
- Develop real-world terminal programs suitable for a portfolio

This project helped me practice:

- Building a modular C project separated into multiple source/header files
- Using fundamental control flow (if, else if, switch, loops)
- Designing a structured, menu-driven CLI application
- Implementing input validation (numeric ranges, logical constraints)
- Organizing programs with reusable helper utilities
- Compiling multi-file C programs
- Writing clean Git commit messages and managing version control

## Highlights

- Menu-driven CLI with clear UX.
- Modular design: separate .c/.h files for each feature.
- Input validation and defensive checks (e.g., divide-by-zero, age range).
- Small, easy-to-read codebase — great for learning and extending.

## Project layout

```
c-interactive-menu/
├── Makefile
├── main.c
├── README.md
└── src/
    ├── math.c, math.h      # basic arithmetic operations
    ├── age.c, age.h        # age classification and validation
    ├── weather.c, weather.h  # weather-based advice
    └── helper.c, helper.h  # input helpers and common utilities
```

## Features

- Math tool: add, subtract, multiply, divide (double precision, division safely guarded)
- Age classifier: validates age (0–120) and classifies as Young, Adult, or Senior
- Weather advisor: simple yes/no inputs to suggest coat/umbrella

## Build & run

Prerequisites: GCC or any standard C compiler.

You can compile and run this project either using the Makefile (recommended) or using a manual gcc command.

This project includes an advanced Makefile that:

- Compiles each .c file into its own .o file
- Only rebuilds changed modules
- Links all objects into the final menu binary

To build the program:

```bash
# build
make

# run
./menu
```

Manual compilation
```bash
gcc main.c src/math.c src/age.c src/weather.c src/helper.c -o menu
./menu
```

CI / automated checks

A lightweight GitHub Actions workflow (ci.yml) compiles the project and runs a smoke test that validates compilation. The CI badge above will show build status once you push this repo to GitHub.

Local smoke-test

```bash
# quick smoke compile/test
bash tests/smoke_test.sh
```

## Example usage

Run the program and follow the numbered menu to choose a tool. Input is validated where appropriate and the program returns to the menu after each operation.

## Development notes

- Keep functions small and single-purpose.
- Add new tools into `src/` with matching header files; update `main.c` to register the menu entry.
- Use `helper.c` for shared I/O and validation utilities.

## Contributing

Open issues or submit a pull request. Keep changes small and focused with descriptive commits.

## License

This project is open-source and free to use under the MIT License.