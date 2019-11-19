x, y, z = 1, 2, 3
print(x, y, z)

x, y, z = y, z, x
print(x, y, z)

scoundrel = {'name':'Robin', 'girfriend':'Marion'}
key, value = scoundrel.popitem()
print(key, value)

a, b, *rest = [1, 2, 3, 4]
print(rest)

name = "Albus Percival Wufric Brian Dumbledore"
first, middle, *last = name.split()
print(middle)

a, *b, c = "abc"
print(a, b, c)

fnord = 'foo'
fnord += 'bar'
fnord *= 2
print(fnord)
