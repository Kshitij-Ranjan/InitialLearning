package JAVA;

import java.util.Scanner;

// classes
class Pen{
    //objects
    String colour;
    String type;// ball-pen, gel

    //methods
    public void write(){
        System.out.println("Writing...");
    }
    public String penColour(String colour){
        return this.colour; // this is used to denote the object like in this case its pen1
                            // so it will be this.colour which will be same as pen1.colour
    }
    Pen(String type, String colour){
        this.type = type;
        this.colour = colour;
    }
}

class Student{
    String name;
    int age;

    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }
    Student(){ // should have same name as the class one has
        System.out.println("Student() is constructor, Scanner() is constructor");
        System.out.println("whenever Student ___ = new Student() is called, Student() is called");
    }
}



public class OOPS1 {

    public static void printing(String stu,int age, String type, String colour){
        System.out.println(stu +" of age "+age+ " is using " +type+" pen of colour "+ colour);
        System.out.println();
    }
    public static void main(String[] args) {
        Pen pen1 = new Pen("Ball","Blue");
        Scanner sc = new Scanner(System.in);
        pen1.write();
        String pen_colour = pen1.penColour(pen1.colour);
        Student s1 = new Student();
        System.out.print("Enter your name: ");
        s1.name = sc.nextLine();
        System.out.print("Enter your age: ");
        s1.age = sc.nextInt();
        System.out.println();
        printing(s1.name, s1.age, pen1.type,pen_colour);
    }

}
