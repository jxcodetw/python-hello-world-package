from hello_world._core import say_hello


def test_say_hello(capfd):
    say_hello("pytest cpp")
    out, err = capfd.readouterr()
    assert all(s in out for s in ["Hello", "pybind11", "pytest cpp"]), \
        f"Output: {out} does not contain expected strings"
