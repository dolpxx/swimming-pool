def my_bin(n: int) -> str:

    if (type(n) != int):
        raise TypeError("Data type mismatch")

    if not (-2147483648 <= n <= 2147483647):
        raise ValueError("Exceeded limit error")

    res: list = list("0b00000000000000000000000000000000")
    if n < 0:
        n = -n
        res: list = list("-0b00000000000000000000000000000000")

    idx: int = -1
    while n > 0:
        res[idx] = "01"[n % 2]
        n //= 2
        idx -= 1
    return "".join(res)


def my_hex(n: int) -> str:

    if (type(n) != int):
        raise TypeError("Data type mismatch")

    if not (-2147483648 <= n <= 2147483647):
        raise ValueError("Exceeded limit error")

    res: list = list("0x00000000")
    if n < 0:
        n = -n
        res: list = list("-0x00000000")

    idx: int = -1
    while n > 0:
        res[idx] = "0123456789abcdef"[n % 16]
        n //= 16
        idx -= 1
    return "".join(res)


a = -2147483648
print(f"{my_hex(a)}(16)")
