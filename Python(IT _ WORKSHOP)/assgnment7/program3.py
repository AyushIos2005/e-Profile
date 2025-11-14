import random

def generate_ticket():
    
    ticket = "".join(random.choices("0123456789", k=10))
    return ticket

while 1:
    n = int(input("Enter how many lottery tickets you want to generate (minimum 2): "))

    if n < 2:
        print("You must generate at least 2 tickets!")
    else:
        tickets = set()  

        while len(tickets) < n:
            tickets.add(generate_ticket())

        tickets = list(tickets)

        
        winners = random.sample(tickets, 2)

        print("\nTwo Lucky Lottery Tickets are:")
        print("Winner 1:", winners[0])
        print("Winner 2:", winners[1])
