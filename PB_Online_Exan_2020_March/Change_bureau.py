num_bitcoins = int(input())
yuan = float(input())
commission = float(input())
chinese_yuan = 1


chinese_yuan *= yuan * 0.15
chinese_yuan *= 1.76
bitcoin = 1168 * num_bitcoins
before_commission = bitcoin + chinese_yuan
before_commission /= 1.95
after_commission = (commission / 100) * before_commission
result = before_commission - after_commission
print(f'{result:.2f}')
