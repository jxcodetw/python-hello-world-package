import cowsay


def say_hello(message: str = "Moo") -> None:
    cowsay.cow(f"Hello, {message}")
