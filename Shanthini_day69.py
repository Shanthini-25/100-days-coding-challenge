class Triangle():
    def name(self):
        print("I am a Triangle")
    
class Isoceles(Triangle):
    def show(self):
        print("I am an Isoceles Triangle")
        
class Equilateral(Isoceles):
    def print(self):
        print("I am an Equilateral Triangle")
        
call = Equilateral()
call.print()
call.show()
call.name()