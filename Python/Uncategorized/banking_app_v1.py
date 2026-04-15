# cannot deal with floating values
# has a case bug in the (review last action) function
balance = 0
last_action = None
action_case = None
last_withdraw = None
last_deposit = None

def show_balance():
    print(f"Balance: {balance:.2f}")

def deposit(amount):
    global balance
    balance += amount
    return balance

def withdraw(amount):
    global balance
    if balance < amount:
        return False
    else:
        balance -= amount
        return True

def interest_calc(principle):
    total = principle * (1 + 5 / 100)
    return total

print("------------ Banking App ------------")
while True:
    print("Choose An Option: ")
    print("1- Show Balance")
    print("2- Deposit")
    print("3- Withdraw")
    print("4- Calculate Interest")
    print("5- Review Last Action")
    print("6- Review Last Deposit")
    print("7- Review Last Withdraw")
    print("8- Quit")
    decision = input()

    if not decision.isdigit():
        print("Enter A Valid Option (1:5)")
        continue

    match int(decision):
        case 1:
            last_action = 1
            show_balance()
            print()
            continue
        case 2:
            last_action = 2
            while True:
                depos = input("Enter The Amount (Depositing): ")
                if not depos.isdigit():
                    print("Invalid Amount")
                    action_case = 'Unsuccessful'
                    continue
                break
            deposit(float(depos))
            print("Amount Deposited Successfully!")
            action_case = 'Successful'
            last_deposit = float(depos)
            print()
            continue
        case 3:
            last_action = 3
            while True:
                withdraw_1 = input("Enter The Amount (Withdrawing): ")
                if not withdraw_1.isdigit():
                    print("Invalid Amount")
                    action_case = 'Unsuccessful'
                    print()
                    continue
                break
            if withdraw(float(withdraw_1)):
                print("Amount Withdrawn Successfully!")
                action_case = 'Successful'
                last_withdraw = float(withdraw_1)
                print()
                continue
            else:
                print("Balance Is NOT Enough!")
                print("Withdraw Was NOT Successful")
            print()
            continue
        case 4:
            last_action = 4
            print(f"Balance: {balance}")
            print(f"Interest: {interest_calc(balance) - balance}")
            print(f"Balance After 1 Year: {interest_calc(balance)}")
            print()
            continue
        case 5:
            match last_action:
                case 1:
                    print("Last Actions: -Check Balance-")
                    print()
                    continue
                case 2:
                    print("Last Action: -Deposition-")
                    print(f"Case: {action_case}")
                    print()
                    continue
                case 3:
                    print("Last Action: -Withdraw-")
                    print(f"Case: {action_case}")
                    print()
                    continue
                case 4:
                    print("Calculate Interest")
                    print()
                    continue
                case 6:
                    print("Review Last Deposit")
                    print()
                    continue
                case 7:
                    print("Review Last Withdraw")
                    print()
                    continue
        case 6:
            last_action = 6
            print(f"Last Successful Deposit: {last_deposit}")
            print()
            continue
        case 7:
            last_action = 7
            print(f"Last Successful Withdraw: {last_withdraw}")
            print()
            continue
        case 8:
            break
        case _:
            print("Invalid Choice (1:5)")
            continue
