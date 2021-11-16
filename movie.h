#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
#include<string>
using namespace std;

//Movie class definition
//representing a movie name, its MPA rating and average viewer ratings
//i.e., a movie, MovieName, that has an MPA rating of; G, PG, PG-13, NC-17, and R, that also has a rating of, some real number between 1-5.
class Movie
{
private:
  //private data members and functions
  //returns the name of the movie object
  string movieName;
  //returns the rating of the movie object
  string MPARating;
  //we have an integer array of size 5 for each of our input values for the viewer ratings. Each place in the array holds
  //a value for its correspongding viewer rating (i.e, viewerRating[0] holds the place for the 1 rating values inputted
  //by the user, viewerRating[1] holds the place for the 2 rating values, and so on)
  int viewerRating[5];

public:
  //public member functions
  //default constructor
  //initializes the movie name to Unkown and the movie rating to Unknown. Also initialized the viewer rating array to 0 for all values
  Movie();

  //overloaded constructor
  //initializes the movie name to name and the movie rating to rating. Also initializes the viewer rating array to 0 for all values
  Movie(string name, string rating);

  //the getName function checks to see what the current value of the movieName string is.
  //it then returns the name of the movie object
  string getName();

  //sets the name of the movie object to parameter newName
  void setName(string newName);

  //the getMPARating function checks to see what the current value of the movieRating string is.
  //it then returns the MPARating of the movie object
  string getMPARating();

  //sets the MPARating of the movie object to parameter newRating
  void setMPARating(string newRating);

  //verifies that the parameter number is between 1 and 5, if so, increments the number of viewer rating the movie that match
  //the input parameter
  void addViewerRating(int num);

  //the getAverage function checks all of the current numbers stored in the viewerRating array
  //the function then takes the values of the ratings and total number of ratings input), adds these values
  //and then divides the sum of the rating values and the sum of the total number of ratings. Then it returns the average viewer
  //rating of a movie
  float getAverage();
};

#endif
