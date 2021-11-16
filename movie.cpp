#include<iostream>
#include"movie.h"
#include<string>
using namespace std;

//default constructor
//initializes the movie name to Unkown and the movie rating to Unknown. Also initialized the viewer rating array to 0 for all values
//creates a Movie object in an empty state
Movie::Movie()
{
  movieName = "Unknown";
  MPARating = "Unknown";
  for(int i = 0; i < 5; i++)
  {
    viewerRating[i] = 0;
  }
}

//overloaded constructor
//initializes the movie name to name and the movie rating to rating. Also initializes the viewer rating array to 0 for all values
Movie::Movie(string name, string rating)
{
  movieName = name;
  MPARating = rating;
  for(int i = 0; i < 5; i++)
  {
    viewerRating[i] = 0;
  }
}

//the getName function checks to see what the current value of the movieName string is.
//it then returns the name of the movie object
string Movie::getName()
{
  return movieName;
}

  //sets the name of the movie object to parameter newName
void Movie::setName(string newName)
{
  movieName = newName;
}

//the getMPARating function checks to see what the current value of the movieRating string is.
//it then returns the MPARating of the movie object
string Movie::getMPARating()
{
  return MPARating;
}

//sets the MPARating of the movie object to parameter newRating
void Movie::setMPARating(string newRating)
{
  MPARating = newRating;
}

//verifies that the parameter number is between 1 and 5, if so, increments the number of viewer rating the movie that match
//the input parameter
void Movie::addViewerRating(int num)
{
  //if else function to place viewerRating values in their corresponding place in the viewerRating array
  if(num == 1)
  {
    viewerRating[0]++;
  }
  else if(num == 2)
  {
    viewerRating[1]++;
  }
  else if(num == 3)
  {
    viewerRating[2]++;
  }
  else if(num == 4)
  {
    viewerRating[3]++;
  }
  else if(num == 5)
  {
    viewerRating[4]++;
  }
}

//the getAverage function checks all of the current numbers stored in the viewerRating array
//the function then takes the values of the ratings and total number of ratings input), adds these values
//and then divides the sum of the rating values and the sum of the total number of ratings. Then it returns the average viewer
//rating of a movie
float Movie::getAverage()
{
  //sets the default values for numerator, denominator, and average to 0
  float numerator(0.0), denominator(0.0), average(0.0);
  //goes through each entry in the array and adds the corresponding values to the numerator or denominator
  for(int i = 0; i < 5; i++)
  {
    float temp = viewerRating[i];
    numerator += (temp * (i + 1));
    denominator += temp;
  }

  //if no rating are entered for the movie ratings, the average is simply returned as 0.0 rather than an error
  if(denominator == 0.0)
  {
    return 0.0;
  }
  //calculating the average by dividing the sum of the ratings by the number of ratings
  average = numerator / denominator;
  return average;
}
