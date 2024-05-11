#include<iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include<SFML/System.hpp>
#include<SFML/Graphics/RenderWindow.hpp>
using namespace sf;
using namespace std;
//*****************Checks the intersection of bullet and enemies*********************
bool coll(RectangleShape& bullet, RectangleShape& enem) {
	return (bullet.getGlobalBounds().intersects(enem.getGlobalBounds()));
}



int main()
{
	//**********************  Welcome to The Game *********************
WC:
	{
		RenderWindow window(VideoMode(1600, 1080), "Welcome To the Space Shooter : ", Style::Default | Style::Close);
		RectangleShape BG(Vector2f(1600.0f, 1080.0f));//this is for background pic 1
		Texture bg;
		bg.loadFromFile("C:\\Users\\Hp\\Desktop\\WELCOME SCREEN NEW.png");
		BG.setTexture(&bg);


		Font font;
		font.loadFromFile("C:\\Users\\Hp\\Desktop\\fontMenu.ttf");



		Text welc1, welc2, welc3, welc4, welc5;
		welc1.setFont(font);
		welc1.setString("WELCOME");              //THIS IS FOR WELCOME TO GAME TEXT
		welc1.setPosition(350, 125);
		welc1.setCharacterSize(180);
		welc1.setFillColor(Color::White);
		welc1.setStyle(Text::Bold);

		welc2.setFont(font);
		welc2.setString("TO");              //THIS IS FOR WELCOME TO GAME TEXT
		welc2.setPosition(690, 315);
		welc2.setCharacterSize(100);
		welc2.setFillColor(Color::White);
		welc2.setStyle(Text::Bold);

		welc3.setFont(font);
		welc3.setString("SPACE SHOOTERS 2D");              //THIS IS FOR WELCOME TO GAME TEXT
		welc3.setPosition(180, 425);
		welc3.setCharacterSize(130);
		welc3.setFillColor(Color::White);
		welc3.setStyle(Text::Bold);

		welc4.setFont(font);
		welc4.setString("Press Enter or Spacebar key to start");              //THIS IS FOR START FROM WELCOME SCREEN
		welc4.setPosition(235, 820);
		welc4.setCharacterSize(55);
		welc4.setFillColor(Color::White);
		welc4.setStyle(Text::Italic);

		welc5.setFont(font);
		welc5.setString("Press Escape key to exit the game");              //THIS IS FOR START FROM WELCOME SCREEN
		welc5.setPosition(235, 885);
		welc5.setCharacterSize(55);
		welc5.setFillColor(Color::White);
		welc5.setStyle(Text::Italic);



		while (window.isOpen())
		{
			Event evt;
			while (window.pollEvent(evt))
			{
				switch (evt.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::TextEntered: // Displays the text entered
					if (evt.text.unicode < 128)
					{
						cout << char(evt.text.unicode);
					}
					break;

				default:
					break;
				}
			}
			if (Keyboard::isKeyPressed(Keyboard::Key::Enter))
			{
				cout << " You Press  Enter Successfully  and now You  Go for The Main Menu ! ";
				goto M;
			}
			if (Keyboard::isKeyPressed(Keyboard::Key::Space))
			{
				cout << " You Press  Space Successfully  and now You  Go for The Main Menu ! ";
				goto M;
			}
			if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
			{
				cout << " You Press  Escape Successfully  and now You exit the Game  ! ";
				exit(1);
			}

			window.clear();
			window.draw(BG);
			window.draw(welc1);
			window.draw(welc2);
			window.draw(welc3);
			window.draw(welc4);
			window.draw(welc5);
			window.display();
		}


	}

	//***********************  FOR Instructions**********************
INS:
	{
		RenderWindow window(VideoMode(1600, 1080), "Instruction And Command : ", Style::Default | Style::Close);
		RectangleShape BG(Vector2f(1600.0f, 1080.0f));//this is for background pic 1
		Texture bg;
		bg.loadFromFile("C:\\Users\\Hp\\Desktop\\MASTI NUMBER 2.jpg");
		BG.setTexture(&bg);




		//**************this Part To display the Instruction***************

		Font font;
		font.loadFromFile("C:\\Users\\Hp\\Desktop\\fontMenu.ttf");


		Text ins1, ins2, ins3, ins4, ins22, ins44, ins33, ins5, ins6, ins7, ins77;
		ins1.setFont(font);
		ins1.setString("1) Press Spacebar to shoot.");              //THIS IS FOR INSTRUCTIONS
		ins1.setPosition(0, 0);
		ins1.setCharacterSize(65);
		ins1.setFillColor(Color::White);
		ins1.setStyle(Text::Bold);

		ins2.setFont(font);
		ins2.setString("2) Press right, left, up and down arrow keys");              //THIS IS FOR INSTRUCTIONS
		ins2.setPosition(0, 70);
		ins2.setCharacterSize(58);
		ins2.setFillColor(Color::White);
		ins2.setStyle(Text::Bold);

		ins22.setFont(font);
		ins22.setString("to move in the respective directions.");              //THIS IS FOR INSTRUCTIONS
		ins22.setPosition(0, 133);
		ins22.setCharacterSize(60);
		ins22.setFillColor(Color::White);
		ins22.setStyle(Text::Bold);

		ins3.setFont(font);
		ins3.setString("3) 2D movement will be unlocked on level 2");              //THIS IS FOR INSTRUCTIONS
		ins3.setPosition(0, 199);
		ins3.setCharacterSize(58);
		ins3.setFillColor(Color::White);
		ins3.setStyle(Text::Bold);

		ins33.setFont(font);
		ins33.setString("and onwards.");              //THIS IS FOR INSTRUCTIONS
		ins33.setPosition(0, 262);
		ins33.setCharacterSize(60);
		ins33.setFillColor(Color::White);
		ins33.setStyle(Text::Bold);

		ins4.setFont(font);
		ins4.setString("4) You will start with 10 lives. To advance to");              //THIS IS FOR INSTRUCTIONS
		ins4.setPosition(0, 327);
		ins4.setCharacterSize(58);
		ins4.setFillColor(Color::White);
		ins4.setStyle(Text::Bold);

		ins44.setFont(font);
		ins44.setString("the next level, you have to get 150 score.");              //THIS IS FOR INSTRUCTIONS
		ins44.setPosition(0, 390);
		ins44.setCharacterSize(58);
		ins44.setFillColor(Color::White);
		ins44.setStyle(Text::Bold);

		ins7.setFont(font);
		ins7.setString("5) Scores will be reset at the start of every");              //THIS IS FOR INSTRUCTIONS
		ins7.setPosition(0, 453);
		ins7.setCharacterSize(58);
		ins7.setFillColor(Color::White);
		ins7.setStyle(Text::Bold);

		ins77.setFont(font);
		ins77.setString( "level.");              //THIS IS FOR INSTRUCTIONS
		ins77.setPosition(0, 516);
		ins77.setCharacterSize(60);
		ins77.setFillColor(Color::White);
		ins77.setStyle(Text::Bold);

		ins5.setFont(font);
		ins5.setString("Press Spacebar or Enter to go back to the main menu.");              //THIS IS FOR INSTRUCTIONS
		ins5.setPosition(100, 820);
		ins5.setCharacterSize(50);
		ins5.setFillColor(Color::White);
		ins5.setStyle(Text::Italic);

		ins6.setFont(font);
		ins6.setString("Press Escape to exit.");              //THIS IS FOR INSTRUCTIONS
		ins6.setPosition(435,885);
		ins6.setCharacterSize(50);
		ins6.setFillColor(Color::White);
		ins6.setStyle(Text::Italic);


		while (window.isOpen())
		{
			Event evt;
			while (window.pollEvent(evt))
			{
				switch (evt.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::TextEntered: // Displays the text entered
					if (evt.text.unicode < 128)
					{
						cout << char(evt.text.unicode);
					}
					break;

				default:
					break;
				}
			}
			if (Keyboard::isKeyPressed(Keyboard::Key::Enter))
			{
				cout << " You Press  Enter Successfully  and now You  Go for Main menu The Game  ! ";
				goto M;
			}
			if (Keyboard::isKeyPressed(Keyboard::Key::Space))
			{
				cout << " You Press  SpaceBar Successfully  and now You  Go for Main menu The Game  ! ";
				goto M;
			}
			if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
			{
				cout << " You Press  Escape  and now you Exit The Game  ! ";
				exit(1);
			}


			window.clear();
			window.draw(BG);
			window.draw(ins1);
			window.draw(ins2);
			window.draw(ins22);
			window.draw(ins3);
			window.draw(ins33);
			window.draw(ins4);
			window.draw(ins44);
			window.draw(ins5);
			window.draw(ins6);
			window.draw(ins7);
			window.draw(ins77);
			window.display();
		}


	}

	//********************** THIS PART IS FOR MAIN MENU*********************
M:
	{

		RenderWindow window(VideoMode(1600,1080), "Main Menu : ", Style::Default | Style::Close);


		RectangleShape BG(Vector2f(1600.0f,1080.0f));//this is for background pic 1
		Texture bg;
		bg.loadFromFile("C:\\Users\\Hp\\Desktop\\PIXEL NHII PHATTA.jpg");
		BG.setTexture(&bg);


		RectangleShape  startGame(Vector2f(600.0f, 150.0f)); // This is the Start the Game
		startGame.setPosition(500.0f, 100.0f);
		startGame.setFillColor(Color::Black);
		startGame.setOutlineThickness(4.0f);
		startGame.setOutlineColor(Color::White);
		Vector2f startPosition = startGame.getPosition(); // Get the start position


		RectangleShape  instruction(Vector2f(600.0f, 150.0f)); // This is the Start the Game
		instruction.setPosition(500.0f, 470.0f);
		instruction.setFillColor(Color::Black);
		instruction.setOutlineThickness(4.0f);
		instruction.setOutlineColor(Color::White);
		Vector2f iPosition = instruction.getPosition(); // Get the position


		RectangleShape  exitGame(Vector2f(600.0f, 150.0f)); // This is the Start the Game
		exitGame.setPosition(500.0f, 845.0f);
		exitGame.setFillColor(Color::Black);
		exitGame.setOutlineThickness(4.0f);
		exitGame.setOutlineColor(Color::White);
		Vector2f ePosition = exitGame.getPosition(); // Get the start position


		// the below portion for represent the text
		Font font;
		font.loadFromFile("C:\\Users\\Hp\\Desktop\\fontMenu.ttf");

		Text option1, option2, option3;
		option1.setFont(font);
		option1.setString("Start Game");                  //THIS IS FOR START GAME TEXT
		option1.setPosition(610, 138);
		option1.setCharacterSize(60);
		option1.setFillColor(Color::White);
		option1.setStyle(Text::Bold);

		option2.setFont(font);
		option2.setString("Instructions");
		option2.setPosition(575, 508);                     //THIS IS FOR INSTRUCTIONS TEXT
		option2.setCharacterSize(60);
		option2.setFillColor(Color::White);
		option2.setStyle(Text::Bold);

		option3.setFont(font);
		option3.setString("Exit Game");
		option3.setPosition(630, 883);
		option3.setCharacterSize(60);                       //THIS IS FOR EXIT GAME TEXT
		option3.setFillColor(Color::White);
		option3.setStyle(Text::Bold);


		while (window.isOpen())
		{
			Event evt;
			while (window.pollEvent(evt))
			{
				switch (evt.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::TextEntered: // Displays the text entered
					if (evt.text.unicode < 128)
					{
						cout << char(evt.text.unicode);
					}
					break;
				case Event::MouseButtonPressed:
					if (evt.mouseButton.button == Mouse::Left)
					{

						Vector2i mousePos = Mouse::getPosition(window);
						// Check if Left-click occurs at the start position

						if (mousePos.x >= startPosition.x && mousePos.x <= startPosition.x + startGame.getSize().x &&
							mousePos.y >= startPosition.y && mousePos.y <= startPosition.y + startGame.getSize().y) {
							cout << "Left-click detected at start position!\n";
							goto L;
							// Perform actions when Left-click occurs at the start position
							// For now, I'll just close the window as an example
							window.close();
						}


						//this click is for instructions

						if (mousePos.x >= iPosition.x && mousePos.x <= iPosition.x + instruction.getSize().x &&
							mousePos.y >= iPosition.y && mousePos.y <= iPosition.y + instruction.getSize().y)
						{
							cout << "Left Click Succesfully on instruction!\n";
							goto INS;
							//	window.close();
						}


						// This for Exi the game

						if (mousePos.x >= ePosition.x && mousePos.x <= ePosition.x + exitGame.getSize().x &&
							mousePos.y >= ePosition.y && mousePos.y <= ePosition.y + exitGame.getSize().y)
						{
							cout << "Left Click Succesfully on Exit !\n";
							exit(1);
							window.close();
						}


					}
					break;
				default:
					break;
				}
			}

			window.clear();
			window.draw(BG);
			window.draw(startGame);
			window.draw(instruction);
			window.draw(exitGame);
			window.draw(option1);
			window.draw(option2);
			window.draw(option3);
			window.display();
		}



	}

	//**********************  This Part  is for Selecting Levels *****************
L:
	{

		RenderWindow window(VideoMode(1600, 1080), "Selecting Levels   : ", Style::Default | Style::Close);



		RectangleShape BG(Vector2f(1600.0f, 1080.0f));//this is for background pic 1
		Texture bg;
		bg.loadFromFile("C:\\Users\\Hp\\Desktop\\INSTRUCTION.jpg");
		BG.setTexture(&bg);


		RectangleShape  level1(Vector2f(400.0f, 110.0f)); // This is the Level 1 the Game
		level1.setPosition(585.0f, 60.0f);
		level1.setFillColor(Color::Black);
		level1.setOutlineThickness(4.0f);
		level1.setOutlineColor(Color::White);
		Vector2f L1 = level1.getPosition(); // Get the start position


		RectangleShape  level2(Vector2f(400.0f, 110.0f)); // This is the Level 2 the Game
		level2.setPosition(585.0f, 230.0f);
		level2.setFillColor(Color::Black);
		level2.setOutlineThickness(4.0f);
		level2.setOutlineColor(Color::White);
		Vector2f L2 = level2.getPosition(); // Get the start position


		RectangleShape  level3(Vector2f(400.0f, 110.0f)); // This is the Level 3 the Game
		level3.setPosition(585.0f, 400.0f);
		level3.setFillColor(Color::Black); 
		level3.setOutlineThickness(4.0f);
		level3.setOutlineColor(Color::White);
		Vector2f L3 = level3.getPosition(); // Get the start position


		RectangleShape  level4(Vector2f(400.0f, 110.0f)); // This is the Level 4 the Game
		level4.setPosition(585.0f, 570.0f);
		level4.setFillColor(Color::Black);
		level4.setOutlineThickness(4.0f);
		level4.setOutlineColor(Color::White);
		Vector2f L4 = level4.getPosition(); // Get the start position


		RectangleShape  level5(Vector2f(400.0f, 110.0f)); // This is the Level 5 the Game
		level5.setPosition(585.0f, 740.0f);
		level5.setFillColor(Color::Black);
		level5.setOutlineThickness(4.0f);
		level5.setOutlineColor(Color::White);
		Vector2f L5 = level5.getPosition(); // Get the start position


		RectangleShape  exitGame(Vector2f(400.0f, 110.0f)); // This is the Exit the Game
		exitGame.setPosition(585.0f, 910.0f);
		exitGame.setFillColor(Color::Black);
		exitGame.setOutlineThickness(4.0f);
		exitGame.setOutlineColor(Color::White);
		Vector2f eGame = exitGame.getPosition(); // Get the start position

		//****************** THIS PART FOR DISLPLAY THE TEXT*********************

		Font font;
		font.loadFromFile("C:\\Users\\Hp\\Desktop\\fontMenu.ttf");

		Text lev1, lev2, lev3, lev4, lev5, exopt;      //********THIS PART IS FOR LEVEL TEXT*************
		lev1.setFont(font);
		lev1.setString("Level 1");
		lev1.setPosition(680, 84);
		lev1.setCharacterSize(50);
		lev1.setFillColor(Color::White);
		lev1.setStyle(Text::Bold);

		lev2.setFont(font);
		lev2.setString("Level 2");
		lev2.setPosition(680,254 );
		lev2.setCharacterSize(50);
		lev2.setFillColor(Color::White);
		lev2.setStyle(Text::Bold);

		lev3.setFont(font);
		lev3.setString("Level 3");
		lev3.setPosition(680, 424);
		lev3.setCharacterSize(50);
		lev3.setFillColor(Color::White);
		lev3.setStyle(Text::Bold);

		lev4.setFont(font);
		lev4.setString("Level 4");
		lev4.setPosition(680, 594);
		lev4.setCharacterSize(50);
		lev4.setFillColor(Color::White);
		lev4.setStyle(Text::Bold);

		lev5.setFont(font);
		lev5.setString("Level 5");
		lev5.setPosition(680, 764);
		lev5.setCharacterSize(50);
		lev5.setFillColor(Color::White);
		lev5.setStyle(Text::Bold);

		exopt.setFont(font);
		exopt.setString("Exit Game");
		exopt.setPosition(650, 934);
		exopt.setCharacterSize(50);
		exopt.setFillColor(Color::White);
		exopt.setStyle(Text::Bold);




		while (window.isOpen())
		{
			Event evt;
			while (window.pollEvent(evt))
			{
				switch (evt.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::TextEntered: // Displays the text entered
					if (evt.text.unicode < 128)
					{
						cout << char(evt.text.unicode);
					}
					break;
				case Event::MouseButtonPressed:
					if (evt.mouseButton.button == Mouse::Left)
					{

						Vector2i mousePos = Mouse::getPosition(window);

						//this is for level 1


						if (mousePos.x >= L1.x && mousePos.x <= L1.x + level1.getSize().x &&
							mousePos.y >= L1.y && mousePos.y <= L1.y + level1.getSize().y) {
							cout << "Left-click detected at Level 1 !\n";
							goto A;

							window.close();
						}


						//this is for level 2


						if (mousePos.x >= L2.x && mousePos.x <= L2.x + level2.getSize().x &&
							mousePos.y >= L2.y && mousePos.y <= L2.y + level2.getSize().y) {
							cout << "Left-click detected at Level 2 !\n";
							goto B;

							window.close();
						}


						//this is for level 3


						if (mousePos.x >= L3.x && mousePos.x <= L3.x + level3.getSize().x &&
							mousePos.y >= L3.y && mousePos.y <= L3.y + level3.getSize().y) {
							cout << "Left-click detected at Level 3 !\n";
							goto C;

							window.close();
						}



						//this is for level 4


						if (mousePos.x >= L4.x && mousePos.x <= L4.x + level4.getSize().x &&
							mousePos.y >= L4.y && mousePos.y <= L4.y + level4.getSize().y) {
							cout << "Left-click detected at Level 4 !\n";
							goto D;

							window.close();
						}



						//this is for level 5


						if (mousePos.x >= L5.x && mousePos.x <= L5.x + level5.getSize().x &&
							mousePos.y >= L5.y && mousePos.y <= L5.y + level5.getSize().y) {
							cout << "Left-click detected at Level 5 !\n";
							goto E;

							window.close();
						}



						//this is for Exit the Game


						if (mousePos.x >= eGame.x && mousePos.x <= eGame.x + exitGame.getSize().x &&
							mousePos.y >= eGame.y && mousePos.y <= eGame.y + exitGame.getSize().y) {
							cout << "Left-click detected at  for exit the game !\n";
							exit(1);

							window.close();
						}

					}
					break;
				default:
					break;
				}
			}

			window.clear();
			window.draw(BG);
			window.draw(level1);
			window.draw(level2);
			window.draw(level3);
			window.draw(level4);
			window.draw(level5);
			window.draw(exitGame);
			window.draw(lev1);
			window.draw(lev2);
			window.draw(lev3);
			window.draw(lev4);
			window.draw(lev5);
			window.draw(exopt);
			window.display();
		}



	}

	//********************** THIS PART IS FOR STARTING TH GAME********************
ST:
	{

		//***************************** Level 1 ***********************************
	A:
		{
			int lives = 10, score = 0;

			Font font;
			font.loadFromFile("C:\\Users\\Hp\\Desktop\\font.ttf");

			bool isprojectileactive = false;
			RenderWindow window(VideoMode(1600, 1080), "Space Shooter  : ", Style::Default | Style::Close);
			Texture texture;
			{


				Text life, liv, scor, sco;
				//FOR COUT OF LIVES
				life.setFont(font);
				life.setString("LIVES :");
				life.setPosition(20,20);
				life.setCharacterSize(50);
				life.setFillColor(Color::White);
				//FOR LIVES COUNTING
				liv.setFont(font);
				liv.setPosition(200, 20);
				liv.setCharacterSize(50);
				liv.setFillColor(Color::White);
				//FOR SCORE COUNTING
				scor.setFont(font);
				scor.setPosition(220, 90);
				scor.setCharacterSize(50);
				scor.setFillColor(Color::White);
				//FOR COUT OF SCORE
				sco.setFont(font);
				sco.setString("SCORE :");
				sco.setPosition(20, 90);
				sco.setCharacterSize(50);
				sco.setFillColor(Color::White);

				RectangleShape  player(Vector2f(110.0f, 110.0f));//this is space ship
				player.setPosition(700.0f, 950.0f);
				Texture P;
				P.loadFromFile("C:\\Users\\Hp\\Desktop\\spaceship.jpg");
				player.setTexture(&P);


				RectangleShape projectile(Vector2f(65.0f, 65.0f));// this is used to bullet
				projectile.setPosition(player.getPosition().x, player.getPosition().y);
				Texture pro;
				pro.loadFromFile("C:\\Users\\Hp\\Desktop\\LASER.jpg");
				projectile.setTexture(&pro);



				RectangleShape BG(Vector2f(1600.0f,1080.0f));//this is for background pic 1
				Texture bg;
				bg.loadFromFile("C:\\Users\\Hp\\Desktop\\BACKGROUND LVL 1.jpg");
				BG.setTexture(&bg);




				// this portion for enenmeis
				RectangleShape enemy1(Vector2f(66.0f, 66.0f));
				RectangleShape enemy2(Vector2f(66.0f, 66.0f));
				Texture e1, e2;
				enemy1.setPosition(500.0, 0.0);
				enemy2.setPosition(1000.0, 0.0);
				e1.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e2.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				enemy1.setTexture(&e1);
				enemy2.setTexture(&e2);
				

				// Load the sound
				SoundBuffer buffer;
				buffer.loadFromFile("C:\\Users\\Hp\\Desktop\\space.wav");
				Sound sound;
				sound.setBuffer(buffer);


				while (lives > 0)
				{
					Event evt;
					while (window.pollEvent(evt))
					{
						switch (evt.type)
						{
						case Event::Closed:
							window.close(); 
							break;
						case Event::TextEntered://displays the text entered
							if (evt.text.unicode < 128)
							{
								cout << char(evt.text.unicode);
							}
						default: break;
						}
					}

					if (Keyboard::isKeyPressed(Keyboard::Key::Right) && player.getPosition().x < 1480)
					{
						player.move(0.75f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Left) && player.getPosition().x > 10)
					{
						player.move(-0.75f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Space))
					{
						projectile.setPosition(player.getPosition().x, player.getPosition().y);
						isprojectileactive = true;

						// Play the sound when spacebar is pressed
						sound.play();
					}
					if (isprojectileactive)
					{
						projectile.move(0.0f, -10.0f);
					}


					// This Condition Is used when projectile start 
					//initial position will display transparent Color

					Vector2f playerPos = player.getPosition();
					Vector2f projPos = projectile.getPosition();
					float yDistance = playerPos.y - projPos.y;   // Calculate the difference along y-axis
					if (yDistance <= 10)
						projectile.setFillColor(Color::Transparent);
					else
						projectile.setFillColor(Color::White);



					if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
					{
						exit(1);
					}


					enemy1.move(0.0f, 0.5f);
					enemy2.move(0.0f, 0.5f);




					if (coll(projectile, enemy1)) {
						enemy1.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}

					if (coll(projectile, enemy2)) {
						enemy2.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}



					if (enemy1.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy1.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy2.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy2.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (score == 150)
						goto B;

					projectile.move(0.0f, -10.0f);
					window.clear();
					window.draw(BG);
					window.draw(player);
					window.draw(enemy1);
					window.draw(enemy2);
					window.draw(life);
					window.draw(liv);
					window.draw(projectile);
					window.draw(scor);
					window.draw(sco);

					window.display();
				}
			}
			if (score < 150)
				goto LOSING;



		}
		//***************************** Level 2 ***********************************
	B:
		{
			int lives = 10, score = 0;

			Font font;
			font.loadFromFile("C:\\Users\\Hp\\Desktop\\font.ttf");

			bool isprojectileactive = false;
			RenderWindow window(VideoMode(1600, 1080), "Space Shooter  : ", Style::Default | Style::Close);
			Texture texture;
			{
				Text life, liv, scor, sco;
				life.setFont(font);
				life.setString("LIVES :");
				life.setPosition(20, 20);
				life.setCharacterSize(50);
				life.setFillColor(Color::White);
				liv.setFont(font);
				liv.setPosition(200, 20);
				liv.setCharacterSize(50);
				liv.setFillColor(Color::White);
				scor.setFont(font);
				scor.setPosition(220, 90);
				scor.setCharacterSize(50);
				scor.setFillColor(Color::White);
				sco.setFont(font);
				sco.setString("Score :");
				sco.setPosition(20, 90);
				sco.setCharacterSize(50);
				sco.setFillColor(Color::White);

				RectangleShape  player(Vector2f(110.0f, 110.0f));//this is space ship
				player.setPosition(700.0f, 950.0f);
				Texture P;
				P.loadFromFile("C:\\Users\\Hp\\Desktop\\spaceship.jpg");
				player.setTexture(&P);

				RectangleShape projectile(Vector2f(65.0f, 65.0f));// this is used to bullet
				projectile.setPosition(player.getPosition().x, player.getPosition().y);
				Texture pro;
				pro.loadFromFile("C:\\Users\\Hp\\Desktop\\LASER.jpg");
				projectile.setTexture(&pro);


				RectangleShape BG(Vector2f(1600.0f, 1080.0f));//this is for background pic 
				Texture bg;
				bg.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA LEVEL 2.jpg");
				BG.setTexture(&bg);

				// this portion for enenmeis
				RectangleShape enemy1(Vector2f(66.0f, 66.0f));
				RectangleShape enemy2(Vector2f(66.0f, 66.0f));
				RectangleShape enemy3(Vector2f(66.0f, 66.0f));
				Texture e1, e2, e3;
				enemy1.setPosition(500.0, 0.0);
				enemy2.setPosition(1000.0, 0.0);
				enemy3.setPosition(1500.0, 0.0);
				e1.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e2.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e3.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				enemy1.setTexture(&e1);
				enemy2.setTexture(&e2);
				enemy3.setTexture(&e3);


				// Load the sound
				SoundBuffer buffer;
				buffer.loadFromFile("C:\\Users\\Hp\\Desktop\\space.wav");
				Sound sound;
				sound.setBuffer(buffer);


				while (lives > 0)
				{
					Event evt;
					while (window.pollEvent(evt))
					{
						switch (evt.type)
						{
						case Event::Closed:
							window.close(); break;
						case Event::TextEntered://displays the text entered
							if (evt.text.unicode < 128)
							{
								cout << char(evt.text.unicode);
							}
						default: break;
						}
					}

					if (Keyboard::isKeyPressed(Keyboard::Key::Right) && player.getPosition().x < 1470)
					{
						player.move(0.75f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Left) && player.getPosition().x > 10)
					{
						player.move(-0.75f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Up) && player.getPosition().y > 10)
					{
						player.move(0.0f, -0.75f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Down) && player.getPosition().y < 960)
					{
						player.move(0.0f, 0.75f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Space))
					{
						projectile.setPosition(player.getPosition().x, player.getPosition().y);
						isprojectileactive = true;
						sound.play();
					}
					if (isprojectileactive)
					{
						projectile.move(0.0f, -10.0f);
					}


					// This Condition Is used when projectile start 
					//initial position will display transparent Color

					Vector2f playerPos = player.getPosition();
					Vector2f projPos = projectile.getPosition();
					float yDistance = playerPos.y - projPos.y;   // Calculate the difference along y-axis
					if (yDistance <= 10)
						projectile.setFillColor(Color::Transparent);
					else
						projectile.setFillColor(Color::White);



					if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
					{
						exit(1);
					}

					enemy1.move(0.0f, 0.5f);
					enemy2.move(0.0f, 0.5f);
					enemy3.move(0.0f, 0.5f);


					if (coll(projectile, enemy1)) {
						enemy1.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}

					if (coll(projectile, enemy2)) {
						enemy2.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}
					if (coll(projectile, enemy3)) {
						enemy3.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}



					if (enemy1.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy1.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy2.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy2.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy3.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy3.setPosition(rand() % 1490 + 1, 0.0);
					}


					if (score == 150)
						goto  C;

					projectile.move(0.0f, -10.0f);
					window.clear();
					window.draw(BG);
					window.draw(player);
					window.draw(enemy1);
					window.draw(enemy2);
					window.draw(enemy3);
					window.draw(life);
					window.draw(liv);
					window.draw(projectile);
					window.draw(scor);
					window.draw(sco);
					window.display();
				}
			}
			if (score < 150)
				goto LOSING;

		}
		//***************************** Level 3 ***********************************

	C:
		{
			int lives = 10, score = 0;

			Font font;
			font.loadFromFile("C:\\Users\\Hp\\Desktop\\font.ttf");

			bool isprojectileactive = false;
			RenderWindow window(VideoMode(1600, 1080), "Space Shooter  : ", Style::Default | Style::Close);
			Texture texture;

			{
				Text life, liv, scor, sco;
				life.setFont(font);
				life.setString("LIVES :");
				life.setPosition(20, 20);
				life.setCharacterSize(50);
				life.setFillColor(Color::White);
				liv.setFont(font);
				liv.setPosition(200, 20);
				liv.setCharacterSize(50);
				liv.setFillColor(Color::White);
				scor.setFont(font);
				scor.setPosition(220, 90);
				scor.setCharacterSize(50);
				scor.setFillColor(Color::White);
				sco.setFont(font);
				sco.setString("Score :");
				sco.setPosition(20, 90);
				sco.setCharacterSize(50);
				sco.setFillColor(Color::White);

				RectangleShape  player(Vector2f(110.0f, 110.0f));//this is space ship
				player.setPosition(700.0f, 950.0f);
				Texture P;
				P.loadFromFile("C:\\Users\\Hp\\Desktop\\spaceship.jpg");
				player.setTexture(&P);

				RectangleShape projectile(Vector2f(65.0f, 65.0f));// this is used to bullet
				projectile.setPosition(player.getPosition().x, player.getPosition().y);
				Texture pro;
				pro.loadFromFile("C:\\Users\\Hp\\Desktop\\LASER.jpg");
				projectile.setTexture(&pro);


				RectangleShape BG(Vector2f(1600.0f, 1080.0f));//this is for background pic 1
				Texture bg;
				bg.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA LEVEL 3.jpg");
				BG.setTexture(&bg);


				// this portion for enenmeis
				RectangleShape enemy1(Vector2f(66.0f, 66.0f));
				RectangleShape enemy2(Vector2f(66.0f, 66.0f));
				RectangleShape enemy3(Vector2f(66.0f, 66.0f));
				Texture e1, e2, e3;
				enemy1.setPosition(500.0, 0.0);
				enemy2.setPosition(1000.0, 0.0);
				enemy3.setPosition(1500.0, 0.0);
				e1.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e2.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e3.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				enemy1.setTexture(&e1);
				enemy2.setTexture(&e2);
				enemy3.setTexture(&e3);



				// Load the sound
				SoundBuffer buffer;
				buffer.loadFromFile("C:\\Users\\Hp\\Desktop\\space.wav");
				Sound sound;
				sound.setBuffer(buffer);


				while (lives > 0)
				{
					Event evt;
					while (window.pollEvent(evt))
					{
						switch (evt.type)
						{
						case Event::Closed:
							window.close(); break;
						case Event::TextEntered://displays the text entered
							if (evt.text.unicode < 128)
							{
								cout << char(evt.text.unicode);
							}
						default: break;
						}
					}

					if (Keyboard::isKeyPressed(Keyboard::Key::Right) && player.getPosition().x < 1470)
					{
						player.move(1.0f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Left) && player.getPosition().x > 10)
					{
						player.move(-1.0f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Up) && player.getPosition().y > 10)
					{
						player.move(0.0f, -1.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Down) && player.getPosition().y < 970)
					{
						player.move(0.0f, 1.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Space))
					{
						projectile.setPosition(player.getPosition().x, player.getPosition().y);
						isprojectileactive = true;
						sound.play();
					}
					if (isprojectileactive)
					{
						projectile.move(0.0f, -10.0f);
					}


					// This Condition Is used when projectile start 
					//initial position will display transparent Color

					Vector2f playerPos = player.getPosition();
					Vector2f projPos = projectile.getPosition();
					float yDistance = playerPos.y - projPos.y;   // Calculate the difference along y-axis
					if (yDistance <= 10)
						projectile.setFillColor(Color::Transparent);
					else
						projectile.setFillColor(Color::White);



					if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
					{
						exit(1);
					}

					enemy1.move(0.0f, 0.75f);
					enemy2.move(0.0f, 0.75f);
					enemy3.move(0.0f, 0.75f);


					if (coll(projectile, enemy1)) {
						enemy1.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}

					if (coll(projectile, enemy2)) {
						enemy2.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}
					if (coll(projectile, enemy3)) {
						enemy3.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}



					if (enemy1.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy1.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy2.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy2.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy3.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy3.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (score == 150)
						goto D;

					projectile.move(0.0f, -10.0f);
					window.clear();
					window.draw(BG);
					window.draw(player);
					window.draw(enemy1);
					window.draw(enemy2);
					window.draw(enemy3);
					window.draw(life);
					window.draw(liv);
					window.draw(scor);
					window.draw(sco);


					window.draw(projectile);

					window.display();
				}
			}
			if (score < 150)
				goto LOSING;

		}
		//***************************** Level 4 ***********************************
	D:
		{
			int lives = 10, score = 0;

			Font font;
			font.loadFromFile("C:\\Users\\Hp\\Desktop\\font.ttf");

			bool isprojectileactive = false;
			RenderWindow window(VideoMode(1600, 1080), "Space Shooter  : ", Style::Default | Style::Close);
			Texture texture;
			{
				Text life, liv, scor, sco;
				life.setFont(font);
				life.setString("LIVES :");
				life.setPosition(20, 20);
				life.setCharacterSize(50);
				life.setFillColor(Color::White);
				liv.setFont(font);
				liv.setPosition(200, 20);
				liv.setCharacterSize(50);
				liv.setFillColor(Color::White);
				scor.setFont(font);
				scor.setPosition(220, 90);
				scor.setCharacterSize(50);
				scor.setFillColor(Color::White);
				sco.setFont(font);
				sco.setString("Score :");
				sco.setPosition(20, 90);
				sco.setCharacterSize(50);
				sco.setFillColor(Color::White);

				RectangleShape  player(Vector2f(110.0f, 110.0f));//this is space ship
				player.setPosition(700.0f, 950.0f);
				Texture P;
				P.loadFromFile("C:\\Users\\Hp\\Desktop\\SPACESHIP.jpg");
				player.setTexture(&P);

				RectangleShape projectile(Vector2f(65.0f, 65.0f));// this is used to bullet
				projectile.setPosition(player.getPosition().x, player.getPosition().y);
				Texture pro;
				pro.loadFromFile("C:\\Users\\Hp\\Desktop\\LASER.jpg");
				projectile.setTexture(&pro);




				RectangleShape BG(Vector2f(1600.0f, 1080.0f));//this is for background pic 
				Texture bg;
				bg.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA LEVEL 4.jpg");
				BG.setTexture(&bg);


				// this portion for enenmeis
				RectangleShape enemy5(Vector2f(66.0f, 66.0f));
				RectangleShape enemy4(Vector2f(66.0f, 66.0f));
				RectangleShape enemy3(Vector2f(66.0f, 66.0f));
				RectangleShape enemy6(Vector2f(66.0f, 66.0f));
				RectangleShape enemy7(Vector2f(66.0f, 66.0f));
				Texture e1, e2, e3, e4, e5;
				enemy5.setPosition(50.0, 0.0);
				enemy4.setPosition(350.0, 0.0);
				enemy3.setPosition(650.0, 0.0);
				enemy6.setPosition(950.0, 0.0);
				enemy7.setPosition(1250.0, 0.0);
				e1.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e2.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e3.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e4.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e5.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				enemy5.setTexture(&e1);
				enemy4.setTexture(&e2);
				enemy3.setTexture(&e3);
				enemy6.setTexture(&e4);
				enemy7.setTexture(&e5);




				// Load the sound
				SoundBuffer buffer;
				buffer.loadFromFile("C:\\Users\\Hp\\Desktop\\space.wav");
				Sound sound;
				sound.setBuffer(buffer);



				while (lives > 0)
				{
					Event evt;
					while (window.pollEvent(evt))
					{
						switch (evt.type)
						{
						case Event::Closed:
							window.close(); break;
						case Event::TextEntered://displays the text entered
							if (evt.text.unicode < 128)
							{
								cout << char(evt.text.unicode);
							}
						default: break;
						}
					}

					if (Keyboard::isKeyPressed(Keyboard::Key::Right) && player.getPosition().x < 1470)
					{
						player.move(1.5f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Left) && player.getPosition().x > 10)
					{
						player.move(-1.5f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Up) && player.getPosition().y > 10)
					{
						player.move(0.0f, -1.5f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Down) && player.getPosition().y < 1080)
					{
						player.move(0.0f, 1.5f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Space))
					{
						projectile.setPosition(player.getPosition().x, player.getPosition().y);
						isprojectileactive = true;
						sound.play();
					}
					if (isprojectileactive)
					{
						projectile.move(0.0f, -10.0f);
					}


					// This Condition Is used when projectile start 
					//initial position will display transparent Color

					Vector2f playerPos = player.getPosition();
					Vector2f projPos = projectile.getPosition();
					float yDistance = playerPos.y - projPos.y;   // Calculate the difference along y-axis
					if (yDistance <= 10)
						projectile.setFillColor(Color::Transparent);
					else
						projectile.setFillColor(Color::White);



					if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
					{
						exit(1);
					}

					enemy5.move(0.0f, 1.0f);
					enemy4.move(0.0f, 1.0f);
					enemy3.move(0.0f, 1.0f);
					enemy6.move(0.0f, 1.0f);
					enemy7.move(0.0f, 1.0f);


					if (coll(projectile, enemy5)) {
						enemy5.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}

					if (coll(projectile, enemy4)) {
						enemy4.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}
					if (coll(projectile, enemy3)) {
						enemy3.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}
					if (coll(projectile, enemy6)) {
						enemy6.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}
					if (coll(projectile, enemy7)) {
						enemy7.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}



					if (enemy5.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy5.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy4.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy4.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy3.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy3.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy6.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy6.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy7.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy7.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (score == 150)
						goto E;

					projectile.move(0.0f, -10.0f);
					window.clear();
					window.draw(BG);
					window.draw(player);
					window.draw(enemy3);
					window.draw(enemy4);
					window.draw(enemy5);
					window.draw(enemy6);
					window.draw(enemy7);
					window.draw(life);
					window.draw(liv);
					window.draw(scor);
					window.draw(sco);


					window.draw(projectile);

					window.display();
				}
			}
			if (score < 150)
				goto LOSING;

		}
		//***************************** Level 5 ***********************************

	E:
		{
			int lives = 10, score = 0;

			Font font;
			font.loadFromFile("C:\\Users\\Hp\\Desktop\\font.ttf");

			bool isprojectileactive = false;
			RenderWindow window(VideoMode(1600, 1080), "Space Shooter  : ", Style::Default | Style::Close);
			Texture texture;
			{

				Text life, liv, scor, sco;
				life.setFont(font);
				life.setString("LIVES :");
				life.setPosition(20, 20);
				life.setCharacterSize(50);
				life.setFillColor(Color::White);
				liv.setFont(font);
				liv.setPosition(200, 20);
				liv.setCharacterSize(50);
				liv.setFillColor(Color::White);
				scor.setFont(font);
				scor.setPosition(220, 90);
				scor.setCharacterSize(50);
				scor.setFillColor(Color::White);
				sco.setFont(font);
				sco.setString("Score :");
				sco.setPosition(20, 90);
				sco.setCharacterSize(50);
				sco.setFillColor(Color::White);

				RectangleShape  player(Vector2f(110.0f, 110.0f));//this is space ship
				player.setPosition(700.0f, 950.0f);
				Texture P;
				P.loadFromFile("C:\\Users\\Hp\\Desktop\\spaceship.jpg");
				player.setTexture(&P);

				RectangleShape projectile(Vector2f(65.0f, 65.0f));// this is used to bullet
				projectile.setPosition(player.getPosition().x, player.getPosition().y);
				Texture pro;
				pro.loadFromFile("C:\\Users\\Hp\\Desktop\\LASER.jpg");
				projectile.setTexture(&pro);



				RectangleShape BG(Vector2f(1600.0f, 1080.0f));//this is for background pic 
				Texture bg;
				bg.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA LEVEL 5.jpg");
				BG.setTexture(&bg);



				// this portion for enenmeis
				RectangleShape enemy5(Vector2f(66.0f, 66.0f));
				RectangleShape enemy4(Vector2f(66.0f, 66.0f));
				RectangleShape enemy3(Vector2f(66.0f, 66.0f));
				RectangleShape enemy6(Vector2f(66.0f, 66.0f));
				RectangleShape enemy7(Vector2f(66.0f, 66.0f));
				Texture e1, e2, e3, e4, e5;
				enemy5.setPosition(50.0, 0.0);
				enemy4.setPosition(350.0, 0.0);
				enemy3.setPosition(650.0, 0.0);
				enemy6.setPosition(950.0, 0.0);
				enemy7.setPosition(1250.0, 0.0);
				e1.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e2.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e3.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e4.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				e5.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA ENEMY.jpg");
				enemy5.setTexture(&e1);
				enemy4.setTexture(&e2);
				enemy3.setTexture(&e3);
				enemy6.setTexture(&e4);
				enemy7.setTexture(&e5);



				// Load the sound
				SoundBuffer buffer;
				buffer.loadFromFile("C:\\Users\\Hp\\Desktop\\space.wav");
				Sound sound;
				sound.setBuffer(buffer);


				while (lives > 0)
				{
					Event evt;
					while (window.pollEvent(evt))
					{
						switch (evt.type)
						{
						case Event::Closed:
							window.close(); break;
						case Event::TextEntered://displays the text entered
							if (evt.text.unicode < 128)
							{
								cout << char(evt.text.unicode);
							}
						default: break;
						}
					}

					if (Keyboard::isKeyPressed(Keyboard::Key::Right) && player.getPosition().x < 1470)
					{
						player.move(2.0f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Left) && player.getPosition().x > 10)
					{
						player.move(-2.0f, 0.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Up) && player.getPosition().y > 10)
					{
						player.move(0.0f, -2.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Down) && player.getPosition().y < 970)
					{
						player.move(0.0f, 2.0f);
					}
					if (Keyboard::isKeyPressed(Keyboard::Key::Space))
					{
						projectile.setPosition(player.getPosition().x, player.getPosition().y);
						isprojectileactive = true;
						sound.play();
					}
					if (isprojectileactive)
					{
						projectile.move(0.0f, -10.0f);
					}


					// This Condition Is used when projectile start 
					//initial position will display transparent Color

					Vector2f playerPos = player.getPosition();
					Vector2f projPos = projectile.getPosition();
					float yDistance = playerPos.y - projPos.y;   // Calculate the difference along y-axis
					if (yDistance <= 10)
						projectile.setFillColor(Color::Transparent);
					else
						projectile.setFillColor(Color::White);




					if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
					{
						exit(1);
					}

					enemy5.move(0.0f, 1.5f);
					enemy4.move(0.0f, 1.5f);
					enemy3.move(0.0f, 1.5f);
					enemy6.move(0.0f, 1.5f);
					enemy7.move(0.0f, 1.5f);


					if (coll(projectile, enemy5)) {
						enemy5.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}

					if (coll(projectile, enemy4)) {
						enemy4.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}
					if (coll(projectile, enemy3)) {
						enemy3.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}
					if (coll(projectile, enemy6)) {
						enemy6.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}
					if (coll(projectile, enemy7)) {
						enemy7.setPosition(rand() % 1490 + 1, 0.0);
						score = score + 10;
						scor.setString(to_string(score));
					}



					if (enemy5.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy5.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy4.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy4.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy3.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy3.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy6.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy6.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (enemy7.getPosition().y == 1080.0f)
					{
						lives--;
						liv.setString(to_string(lives));
						enemy7.setPosition(rand() % 1490 + 1, 0.0);
					}

					if (score == 150)
						goto WINING;

					projectile.move(0.0f, -10.0f);
					window.clear();
					window.draw(BG);
					window.draw(player);
					window.draw(enemy3);
					window.draw(enemy4);
					window.draw(enemy5);
					window.draw(enemy6);
					window.draw(enemy7);
					window.draw(life);
					window.draw(liv);
					window.draw(scor);
					window.draw(sco);


					window.draw(projectile);

					window.display();
				}
			}
			if (score < 150)
				goto LOSING;
		}
	}



	//****************************  WINING MOMENT *****************************
WINING:
{
	RenderWindow window(VideoMode(1600, 1080), "YOU WON : ", Style::Default | Style::Close);
	RectangleShape BG(Vector2f(1600.0f, 1080.0f));//this is for background pic 1
	Texture bg;
	bg.loadFromFile("C:\\Users\\Hp\\Desktop\\RANA JEET 2.jpg");
	BG.setTexture(&bg);

	Font font;
	font.loadFromFile("C:\\Users\\Hp\\Desktop\\fontMenu.ttf");



	Text welc1, welc2, welc3, welc4, welc5;
	welc1.setFont(font);
	welc1.setString("Congratulations");              //THIS IS FOR Congratulations TO GAME TEXT
	welc1.setPosition(125, 145);
	welc1.setCharacterSize(145);
	welc1.setFillColor(Color::White);
	welc1.setStyle(Text::Bold);

	welc2.setFont(font);
	welc2.setString("YOU");              //THIS IS FOR You TO GAME TEXT
	welc2.setPosition(690, 315);
	welc2.setCharacterSize(100);
	welc2.setFillColor(Color::White);
	welc2.setStyle(Text::Bold);

	welc3.setFont(font);
	welc3.setString("Win");              //THIS IS FOR WIN TO GAME TEXT
	welc3.setPosition(662, 425);
	welc3.setCharacterSize(130);
	welc3.setFillColor(Color::White);
	welc3.setStyle(Text::Bold);

	welc4.setFont(font);
	welc4.setString("Press Enter  key to start Start Again");              //THIS IS FOR START FROM WELCOME SCREEN
	welc4.setPosition(235, 820);
	welc4.setCharacterSize(55);
	welc4.setFillColor(Color::White);
	welc4.setStyle(Text::Italic);

	welc5.setFont(font);
	welc5.setString("Press Escape key to exit the game");              //THIS IS FOR START FROM WELCOME SCREEN
	welc5.setPosition(235, 885);
	welc5.setCharacterSize(55);
	welc5.setFillColor(Color::White);
	welc5.setStyle(Text::Italic);


	// Load the sound
	SoundBuffer buffer;
	buffer.loadFromFile("C:\\Users\\Hp\\Desktop\\wining.wav");
	Sound sound;
	sound.setBuffer(buffer);
	sound.play();


	while (window.isOpen())
	{
		Event evt;
		while (window.pollEvent(evt))
		{
			switch (evt.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::TextEntered: // Displays the text entered
				if (evt.text.unicode < 128)
				{
					cout << char(evt.text.unicode);
				}
				break;

			default:
				break;
			}
		}
		if (Keyboard::isKeyPressed(Keyboard::Key::Enter))
		{
			cout << " You Press  Enter Successfully  and now You  Go for The Main Menu ! ";
			goto M;
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
		{
			cout << " You Press  Escape Successfully  and now You exit the Game  ! ";
			exit(1);
		}

		window.clear();
		window.draw(BG);
		window.draw(welc1);
		window.draw(welc2);
		window.draw(welc3);
		window.draw(welc4);
		window.draw(welc5);
		window.display();

	}
	}

	//****************************  LOSING MOMENT *****************************
LOSING:
{
	RenderWindow window(VideoMode(1600, 1080), "YOU LOSE ! ", Style::Default | Style::Close);
	RectangleShape BG(Vector2f(1600.0f, 1080.0f));//this is for background pic 
	Texture bg;
	bg.loadFromFile("C:\\Users\\Hp\\Desktop\\LOSING MOMENT.jpg");
	BG.setTexture(&bg);

	Font font;
	font.loadFromFile("C:\\Users\\Hp\\Desktop\\fontMenu.ttf");



	Text welc1, welc2;




	welc1.setFont(font);
	welc1.setString("Press Enter to  Start Again");              //THIS IS FOR START FROM WELCOME SCREEN
	welc1.setPosition(235, 820);
	welc1.setCharacterSize(55);
	welc1.setFillColor(Color::White);
	welc1.setStyle(Text::Italic);
	welc1.setStyle(Text::Bold);

	welc2.setFont(font);
	welc2.setString("Press Escape to exit the game");              //THIS IS FOR START FROM WELCOME SCREEN
	welc2.setPosition(235, 885);
	welc2.setCharacterSize(55);
	welc2.setFillColor(Color::White);
	welc2.setStyle(Text::Italic);
	welc2.setStyle(Text::Bold);



	// Load the sound
	SoundBuffer buffer;
	buffer.loadFromFile("C:\\Users\\Hp\\Desktop\\loser.wav");
	Sound sound;
	sound.setBuffer(buffer);
	sound.play();

	while (window.isOpen())
	{
		Event evt;
		while (window.pollEvent(evt))
		{
			switch (evt.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::TextEntered: // Displays the text entered
				if (evt.text.unicode < 128)
				{
					cout << char(evt.text.unicode);
				}
				break;

			default:
				break;
			}
		}
		if (Keyboard::isKeyPressed(Keyboard::Key::Enter))
		{
			cout << " You Press  Enter Successfully  and now You  Go for The Main Menu ! ";
			goto M;
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
		{
			cout << " You Press  Escape Successfully  and now You exit the Game  ! ";
			exit(1);
		}
		
		window.clear();
		window.draw(BG);
		window.draw(welc1);
		window.draw(welc2);
		window.display();

	}
	}



	return 0;
}
