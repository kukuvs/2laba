
mas = [90,2,3,5,4,1,7,6,0,9,8]
n = len(mas)

for run in range(n-1):
    for i in range(n-1):
        if mas[i] > mas[i+1]:
            mas[i], mas[i+1] = mas[i+1], mas[i]
print(mas)