using System;



/*


programe 1


public class Person{

     public string Name { get; set; }

    public Person(string name){
        Name = name;
    }

    ~Person(){

        Name=string.Empty;

    }

    public override string ToString(){
        
        return $"Hello my Name is {Name}";
    }

}

class Program{

static void Main(){

    Person[] people=new Person[3];

    for(int i=0; i<3;i++){

        string name=Console.ReadLine();
        people[i]=new Person(name);
    }

    foreach (Person Person in people)
    {
        Console.WriteLine(Person.ToString());
    }

}
}
*/

/*

Programe 2

using System;

public class Person{

    public int Age{get; set;}

    public void Greet(){

        Console.WriteLine("Hello");
    }
    public void SetAge(int age){

        Age=age;

    }
}

public class Student:Person{

    public void Study(){
        Console.WriteLine("i am study");
    }

    public void ShowAge(){
        Console.WriteLine($"i am {Age}");
    }
}

public class Teacher:Person{

    public void Explain(){
        Console.WriteLine("i am teaching now");
    }

}


public class StudentProfessorTest
{
    public static void Main(){
        Person person=new Person();
        person.Greet();
        Student student=new Student();
        student.Greet();
        student.SetAge(20);
        student.ShowAge();
        student.Study();
        Teacher teacher = new Teacher();
        teacher.Greet();
        teacher.Explain();
    }
}


*/



/*


Programme 3

using System;

public class PhotoBook{

    private int numPages;

    public PhotoBook(){
        numPages=16;
    }

    public PhotoBook(int num){
        numPages=num;
    }

    public int GetNumber(){
        return numPages;
    }

}

public class BigPhotoBook: PhotoBook{

    public BigPhotoBook():base(64)
    {

    }
}

public class PhotoBookTest{

    public static void  Main(){


        PhotoBook photbook1=new PhotoBook();
        Console.WriteLine(photbook1.GetNumber());

        PhotoBook photbook2=new PhotoBook(24);
        Console.WriteLine(photbook2.GetNumber());

        BigPhotoBook big = new BigPhotoBook();
        Console.WriteLine(big.GetNumber());
    }
}




*/

/*
prob 2
public class Programe
{
    public static void Main(string[] args)
    {
        Console.WriteLine("enter your grade");
        char grade=Console.ReadLine()[0];
        switch(grade)
        {
            case 'A': Console.WriteLine("exce");
            break;
            case 'B': Console.WriteLine("very good");
            break;
            case 'C': Console.WriteLine("good");
            break;
        }
    }
}

*/

/*
prob 3
public class Programe
{
    public static void Main(){
        int rev=0;
        Console.WriteLine("enter the number:");
        int num=Convert.ToInt32(Console.ReadLine());
        int org=num;
        while(num>0){
            rev*=10;
            rev+=num%10;
            num/=10;
        }
        if(rev==org){
            Console.WriteLine("palindrome");
        }
        else{
            Console.WriteLine("not");
        }
    }
}

*/

/*

prob 3

public class Program{

    public static void Main(){
        int sum=0;
        for(int i=0;i<=100;i++){

            if(i%3==0 || i%5==0){
                sum+=i;
            }

        }
        Console.WriteLine(sum);
    }
}

*/
/*

prob 4

public class Program{

    public static void Main(){
        int num=Convert.ToInt32(Console.ReadLine());
        if(num%2==0){
            Console.WriteLine("Yes");
        }
        else{
             Console.WriteLine("No");
        }
    }
}

*/


/*

prob 5
public class Programe{

    public static int Main(){
        int num=Convert.ToInt32(Console.ReadLine());
        int []arr=new int[5] {1,3,4,2,9};
        for(int i=0;i<5;i++){
            if(num==arr[i]){
                Console.WriteLine("Found");
                return 0;
            }
        }
        Console.WriteLine("Not");
         return 0;
    }
}

*/
/*
prob 6
public class Programe
{

    public static void Main()
    {
        int [,] num=new int[3, 3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                num[i, j]=Convert.ToInt32(Console.ReadLine());
            }
        }
        int small=num[0, 0];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(small>num[i, j])
                {
                    small=num[i, j];
                }
            }
        }
        Console.WriteLine("the smallest is: "+small);
    }
}

*/
/*

2end prob 1

public class Person{
    public string Name{get; set;}

    public Person(string name){
        Name=name;
    }

    ~Person(){
        Name=string.Empty;
    }

    public override string ToString(){
        return $"Hello my name is {Name}";
    }

}

public class Programe{

    public static void Main(){
        Person[] people=new Person[3];

        for(int i=0;i<3;i++){
            string name=Console.ReadLine();
            people[i]=new Person(name);
        }
        foreach(Person person in people ){
            Console.WriteLine(person.ToString());
        }
    }
}

*/

/*

2end prob 2


public class Person{
    public int Age{get; set;}

    public void SetAge(int age){
        Age=age;
    }

    public void Greet(){
        Console.WriteLine("Hello");
    }
}

public class Student:Person{

    public void Study(){
        Console.WriteLine("i am study");
    }

    public void ShowAge(){
        Console.WriteLine("my age is "+ Age);
    }
}

public class Teacher:Person{

    public void Teaching(){
        Console.WriteLine("i am teaching");
    }

}

public class Programe{

    public static void Main(){
        Person person =new Person() ;
        person.Greet();
        Student st=new Student();
        st.SetAge(20);
        st.Greet();
        st.ShowAge();
        st.Study();
        Teacher te=new Teacher();
        te.Greet();
        te.Teaching();
    }
}


*/


public class PhotoBook{
    private int numPages;

    public void GetNumber(){
       Console.WriteLine(numPages);

    }

    public PhotoBook(){
        numPages=16;
    }

    public PhotoBook(int num){
        numPages=num;
    }
}

public class BigPhotoBook:PhotoBook{

    public BigPhotoBook():base(64)
    {

    }
}

public class PhotoBookTest{

    public static void Main(){
        PhotoBook book=new PhotoBook();
        book.GetNumber();
        PhotoBook book2=new PhotoBook(24);
        book2.GetNumber();
        BigPhotoBook big=new BigPhotoBook();
        big.GetNumber();

    }
}
