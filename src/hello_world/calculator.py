# import math # unused import for testing ruff


class Calculator:
    def __init__(self) -> None:
        self.reset()

    def add(self, value: float) -> float:
        self.total += value
        return self.getValue()

    def sub(self, value: float) -> float:
        self.total -= value
        return self.getValue()

    def mul(self, value: float) -> float:
        self.total *= value
        return self.getValue()

    def div(self, value: float) -> float:
        if value == 0:
            raise ValueError("Cannot divide by zero")
        self.total /= value
        return self.getValue()

    def reset(self) -> None:
        self.total: float = 0

    def getValue(self) -> float:
        return self.total
