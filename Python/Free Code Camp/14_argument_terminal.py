import argparse #it helps my script accept arguments from the terminal.

parser = argparse.ArgumentParser(   #Creates a parser object.
    description='This program prints the name of my dogs'
    #this description shows up when I type --help in the terminal
)

parser.add_argument('-c', '--color', metavar='color', required=True, choices= ['red', 'green'],
                    help='the color to search for')

#from chat gpt
# -c or --color: The user can provide the color using either option.
# metavar='color': When help is shown, it’ll display --color color (just for display purpose).
# required=True: The script won’t run unless i provide a color.
#choices= ['red', 'green'] : this will only allow the user to input red or green
# help=...: Description of what this argument is used for.

args = parser.parse_args()
#This parses the command-line input and stores it in the variable args

print(args.color) #here 'color' the one : after '--'
#Prints the value of the --color argument that I provide.
