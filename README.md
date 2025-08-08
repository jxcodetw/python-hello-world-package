# python-hello-world-package
[![Build](https://github.com/jxcodetw/python-hello-world-package/actions/workflows/main.yml/badge.svg?branch=main)](https://github.com/jxcodetw/python-hello-world-package/actions/workflows/main.yml)

This absurdly simple hello world package exists only to learn and play with all the new Python tooling that’s hard to keep up with. I'm pretty sure it's going to be out-dated again very soon :P.

# Development
```shell
uv sync --extra dev # Install dependencies and the package in editable mode

uv run pytest # Run all unit tests
uv run pytest --cov=hello_world # Report coverage in terminal
uv run pytest --cov=hello_world --cov-report=html # generate htmlcov

# Lint src and tests
uv run ruff check src tests 

# Type check the 'src' directory (try 'tests' too and see what explodes)
uv run mypy src # Maybe ruff will save us from MyPy someday

# Show formatting differences without applying them
uv run ruff format --diff
# Automatically format code
uv run ruff format
```

# Build the Wheel Package
```shell
uv build
```