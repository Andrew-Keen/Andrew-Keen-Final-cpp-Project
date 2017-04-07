#include <iostream>
#include <string>

using namespace std;

void game1();
void game2();
void game3();
void game4();

int main(int argc, char *argv[]) {
	string game = "0";
	
	while(game != "-1"){
		//choose a game
		cout << "Game 1" << endl << "Game 2" << endl << "Game 3" << endl << "Game 4" << endl << "Choose a game(-1 to end): ";
		cin >> game;
		
		if(game == "-1"){
			//end the program
			cout << endl << "Thank you for playing!" << endl << "All games from Sooper Dooper Mad Libs.";
			break;
		}
		//list of games
		else if(game == "1"){
			cout << endl;
			game1();
			cout << endl;
		}
		else if(game == "2"){
			cout << endl;
			game2();
			cout << endl;
		}
		else if(game == "3"){
			cout << endl;
			game3();
			cout << endl;
		}
		else if(game == "4"){
			cout << endl;
			game4();
			cout << endl;
		}
		else{
			//return to game select
			cout << endl;
			cout << "Sorry, there is no game " << game << endl;
			cout << endl;
		}
	}
}
//full games
//game 1
void game1(){
	string words[14] = {""};
	//get the words
	cout << "Enter a Plural Noun: ";
	cin >> words[0];
	cout << "Enter an Adjective: ";
	cin >> words[1];
	cout << "Enter an Adjective: ";
	cin >> words[2];
	cout << "Enter a Noun: ";
	cin >> words[3];
	cout << "Enter a Funny Noise: ";
	cin >> words[4];
	cout << "Enter a Verb: ";
	cin >> words[5];
	cout << "Enter a Number: ";
	cin >> words[6];
	cout << "Enter an Adjective: ";
	cin >> words[7];
	cout << "Enter an Adjective: ";
	cin >> words[8];
	cout << "Enter a Part of the Body: ";
	cin >> words[9];
	cout << "Enter a Plural Noun: ";
	cin >> words[10];
	cout << "Enter a Noun: ";
	cin >> words[11];
	cout << "Enter an Adjective: ";
	cin >> words[12];
	cout << "Enter a Noun: ";
	cin >> words[13];
	
	//fill in and output the story
	cout << endl << "Bird Watching and Vice Versa" << endl;
	cout << "Bird watching can be more fun than a barrel of " << words[0] << ". Our " << words[1] << " feathered friends are everywhere, waiting to be watched. An interesting bird to start with is the " << words[2] << " oriole , which builds its nest in " << words[3] << " trees. Early in spring, we hear the oriole give its mating call, which sounds like this: " << words[4] << ". Then the male and female get together and " << words[5] << ". Later, the female lays " << words[6] << " eggs. Isn't that " << words[7] << "? Another fascinating bird is the " << words[8] << "-breasted nuthatch. The nuthatch is very tame. He will fly down and land right on your " << words[9] << " and eat out of your " << words[10] << ". Other birds to watch out for are the red-crested " << words[11] << ", the " << words[12] << "-necked thrush, and the yellow-bellied " << words[13] << " sucker. Now that you know something about birds, get out there and watch!" << endl;
}

//game 2
void game2(){
	string words[16] = {""};
	//get the words
	cout << "Enter a Color: ";
	cin >> words[0];
	cout << "Enter a Plural Noun: ";
	cin >> words[1];
	cout << "Enter an Adjective: ";
	cin >> words[2];
	cout << "Enter a Celebrity: ";
	cin >> words[3];
	cout << "Enter an Adjective: ";
	cin >> words[4];
	cout << "Enter a Noun: ";
	cin >> words[5];
	cout << "Enter a Number: ";
	cin >> words[6];
	cout << "Enter an Number: ";
	cin >> words[7];
	cout << "Enter an Noun: ";
	cin >> words[8];
	cout << "Enter an Adjective: ";
	cin >> words[9];
	cout << "Enter another Celebrity: ";
	cin >> words[10];
	cout << "Enter another Celebrity: ";
	cin >> words[11];
	cout << "Enter an Adjective: ";
	cin >> words[12];
	cout << "Enter a Noun: ";
	cin >> words[13];
	cout << "Enter another Celebrity: ";
	cin >> words[14];
	cout << "Enter an Adjective: ";
	cin >> words[15];
	
	//fill in and output the story
	cout << endl << "A Baseball Broadcast" << endl;
	cout << "Ladies and Gentlemen, this is " << words[0] << " Barber, your sportscaster, bringing you the last inning of the game between the Cleveland " << words[1] << " and the " << words[2] << " Yankees. " << words[3] << " is pitching for the Yankees. Here's the pitch! It's a low " << words[4] << " ball that just cuts the inside of the " << words[5] << " for a strike. That makes the count " << words[6] << " strikes and " << words[7] << " balls. Now here's the next pitch. The batter swings and connects. It's a long, high " << words[8] << " out to " << words[9] << " field. But " << words[10] << " is coming up fast and has it for the second out. The next batter up is " << words[11] << ", the Cleveland " << words[12] << "-stop. Here's the pitch...and it's hit...a short ground ball to third " << words[13] << ". " << words[14] << " scoops it up and throws it to first base for an out, and the game is over. And the Yankees move into second place in the " << words[15] << " League!" << endl;
}

//game 3
void game3(){
string words[12] = {""};
//get the words
cout << "Enter an Adjective: ";
cin >> words[0];
cout << "Enter a Noun: ";
cin >> words[1];
cout << "Enter a Plural Noun: ";
cin >> words[2];
cout << "Enter a Plural Noun: ";
cin >> words[3];
cout << "Enter an Adjective: ";
cin >> words[4];
cout << "Enter a Noun: ";
cin >> words[5];
cout << "Enter a Day of the Week: ";
cin >> words[6];
cout << "Enter a Part of the Body(plural): ";
cin >> words[7];
cout << "Enter an Exclamation: ";
cin >> words[8];
cout << "Enter a Noun: ";
cin >> words[9];
cout << "Enter an Adjective: ";
cin >> words[10];
cout << "Enter a Noun: ";
cin >> words[11];
	
//fill in and output the story
cout << endl << "Mother and Son" << endl;
cout << "MOTHER: Junior, you come right inside. You're late, and your supper is getting " << words[0] << "." << endl;
cout << "SON: Aw, Mom. I've been out playing " << words[1] << " ball with some of the other " << words[2] << "." << endl;
cout << "MOTHER: Well, get inside, And don't forget to wipe your muddy " << words[3] << "." << endl;
cout << "SON: Okay, Mom. Can I watch television while I eat? There's a " << words[4] << " new show on." << endl;
cout << "MOTHER: No, not while you're eating your " << words[5] << "." << endl;
cout << "SON: But Mom! " << words[6] << " Night Football is on." << endl;
cout << "MOTHER: No, sir. You've been watching too much television. You're liable to strain your " << words[7] << "." << endl;
cout << "SON: " << words[8] << "! That's my favorite program." << endl;
cout << "MOTHER: Never mind. Go and wash your " << words[9] << "." << endl;
cout << "SON: Aw, Mom. I don't have to. I'm " << words[10] << "." << endl;
cout << "MOTHER: Don't talk back to me, young man, or I'll have to speak to your " << words[11] << "." << endl;
}

//game 4
void game4(){
	string words[8] = {""};
	//get the words
	cout << "Enter a Geographic Location: ";
	cin >> words[0];
	cout << "Enter an Adjective: ";
	cin >> words[1];
	cout << "Enter a Plural Noun: ";
	cin >> words[2];
	cout << "Enter an Adjective: ";
	cin >> words[3];
	cout << "Enter a Plural Noun: ";
	cin >> words[4];
	cout << "Enter a Number: ";
	cin >> words[5];
	cout << "Enter a Number: ";
	cin >> words[6];
	cout << "Enter an Article of Clothing: ";
	cin >> words[7];
			
	//fill in and output the story
	cout << endl << "Weather Report" << endl;
	cout << "Here is tomorrow's weather report for " << words[0] << " and vicinity. Early tomorrow, a " << words[1] << " front will collide with a mass of hot " << words[2] << " moving from the north. This means we can expect " << words[3] << " winds and occasional " << words[4] << " by late afternoon. Wind velocity will be " << words[5] << " miles an hour, and the high temperature should be around " << words[6] << " degrees. So if you're going out, you had better plan on wearing your " << words[7] << "." << endl;
}


