deposit_sum = float(input())
period = int(input())
annual_interest = float(input())

interest = deposit_sum * (annual_interest / 100)
interest_for_month = interest / 12
all_sum = deposit_sum + period * interest_for_month

print(str(all_sum))
