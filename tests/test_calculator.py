import pytest

from hello_world import Calculator


@pytest.fixture
def calc():
    """
    This is called each time for each test function to get a new calculator
    The name of this function must match the parameter name in the test function
    """
    return Calculator()


def test_init(calc: Calculator):
    assert calc.getValue() == 0


def test_add(calc: Calculator):
    s = 0
    for i in range(10):
        assert calc.getValue() == s
        s += i
        assert calc.add(i) == s


def test_div_zero(calc: Calculator):
    calc.add(20)
    with pytest.raises(ValueError) as exc_info:
        calc.div(0)
    assert "divide by zero" in str(exc_info.value)
