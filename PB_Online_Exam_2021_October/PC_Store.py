cpu_in_dollars = float(input())
gpu_in_dollars = float(input())
ram_in_dollars = float(input())
num_of_ram = int(input())
discount = float(input())

cpu_in_leva = cpu_in_dollars * 1.57
gpu_in_leva = gpu_in_dollars * 1.57
ram_in_leva = ram_in_dollars * 1.57
total_ram = ram_in_leva * num_of_ram

cpu_after_discount = cpu_in_leva - (cpu_in_leva * discount)
gpu_after_discount = gpu_in_leva - (gpu_in_leva * discount)

result = cpu_after_discount + gpu_after_discount + total_ram

print(f'Money needed - {result:.2f} leva.')
