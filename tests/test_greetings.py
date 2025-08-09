import hello_world


def test_say_hello(capsys):
    hello_world.say_hello("pytest")
    captured = capsys.readouterr()
    assert "Hello, pytest" in captured.out, \
        f"Output: {captured.out} does not contain expected string"
