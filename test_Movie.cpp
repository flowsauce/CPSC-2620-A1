#include<iostream>
#include<string>
#include"movie.h"
using namespace std;

int main()
{
  //here we are declaring our variable that will be used when calling the Movie functions
  string s1 = "Aliens";
  string s2 = "PG-13";
  string s3 = "Gladiator";
  string s4 = "R";
  string s5 = "The Notebook";
  string s6 = "PG-13";

  //here we are declaring our Movie functions and their parameters(if any)
  Movie m1(s1, s2);
  Movie m2(s3, s4);
  Movie m3(s5, s6);
  Movie m4;
  Movie m5;

  //the first three movie functions are the overloaded constructors being called and tested to ensure
  //that each of them work with the different parameters and to make sure all of our getters and setters
  //work properly to get and set a new value every time. These are also testing the addViewerRating and
  //getAverage functions to ensure they work and display a value correctly for each separate function.
  cout<<"The movie name is: "<<m1.getName()<<endl;
  m1.setName(s1);
  cout<<"The movie rating is: "<<m1.getMPARating()<<endl;
  m1.setMPARating(s2);
  m1.addViewerRating(1);
  m1.addViewerRating(4);
  m1.addViewerRating(3);
  m1.addViewerRating(4);
  m1.addViewerRating(5);
  m1.addViewerRating(2);
  cout<<m1.getAverage()<<endl;
  cout<<endl;

  cout<<"The movie name is: "<<m2.getName()<<endl;
  m2.setName(s3);
  cout<<"The movie rating is: "<<m2.getMPARating()<<endl;
  m2.setMPARating(s4);
  m2.addViewerRating(4);
  m2.addViewerRating(4);
  m2.addViewerRating(3);
  m2.addViewerRating(4);
  m2.addViewerRating(5);
  m2.addViewerRating(4);
  m2.addViewerRating(1);
  m2.addViewerRating(3);
  cout<<m2.getAverage()<<endl;
  cout<<endl;

  cout<<"The movie name is: "<<m3.getName()<<endl;
  m3.setName(s5);
  cout<<"The movie rating is: "<<m3.getMPARating()<<endl;
  m3.setMPARating(s6);
  m3.addViewerRating(2);
  m3.addViewerRating(3);
  m3.addViewerRating(1);
  m3.addViewerRating(3);
  m3.addViewerRating(2);
  m3.addViewerRating(2);
  m3.addViewerRating(3);
  m3.addViewerRating(5);
  cout<<m3.getAverage()<<endl;
  cout<<endl;

  //the last two movie functions are the default constructors being called and tested to ensure
  //that each of them work with the no parameters and to make sure all of our getters and setters
  //work properly to get and set a new value every time. These are also testing the addViewerRating and
  //getAverage functions to ensure they work and display a value correctly for each separate function.
  m4.setName("Die Hard");
  cout<<"The movie name is: "<<m4.getName()<<endl;
  m4.setMPARating("R");
  cout<<"The movie rating is: "<<m4.getMPARating()<<endl;
  m4.addViewerRating(4);
  m4.addViewerRating(5);
  m4.addViewerRating(4);
  m4.addViewerRating(4);
  m4.addViewerRating(4);
  m4.addViewerRating(3);
  m4.addViewerRating(4);
  m4.addViewerRating(5);
  m4.addViewerRating(4);
  cout<<m4.getAverage()<<endl;
  cout<<endl;

  m5.setName("Moana");
  cout<<"The movie name is: "<<m5.getName()<<endl;
  m5.setMPARating("G");
  cout<<"The movie rating is: "<<m5.getMPARating()<<endl;
  m5.addViewerRating(2);
  m5.addViewerRating(5);
  m5.addViewerRating(3);
  m5.addViewerRating(4);
  m5.addViewerRating(3);
  m5.addViewerRating(4);
  m5.addViewerRating(3);
  cout<<m5.getAverage()<<endl;

  return 0;
}
