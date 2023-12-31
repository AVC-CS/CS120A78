// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("Ex1 maze1 ", "[example]")
{
	int cnt = 0;
	int maze[10][10] = {0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
			    0, 0, 0, 1, 1, 1, 0, 0, 0, 0,
			    0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
			    0, 1, 0, 0, 1, 0, 0, 0, 0, 0,
			    1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
			    0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
			    0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
			    0, 1, 0, 0, 1, 0, 1, 1, 0, 0,
			    0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
			    0, 1, 0, 0, 1, 1, 1, 0, 0, 0};
	cnt = findcross(maze);
	printout(maze, cnt);

	REQUIRE(cnt == 4);
}
// tests for exercise 2
TEST_CASE("Ex2 maze2()", "[example]")
{
	int cnt = 0;
	int maze2[10][10] = {0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
			     0, 0, 0, 1, 0, 1, 0, 0, 0, 0,
			     0, 0, 0, 0, 1, 1, 0, 0, 0, 0,
			     0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
			     1, 0, 1, 1, 0, 1, 1, 0, 0, 0,
			     0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
			     0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
			     0, 1, 0, 0, 1, 0, 1, 1, 0, 0,
			     0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
			     0, 1, 0, 0, 1, 1, 1, 0, 0, 0};
	cnt = findcross(maze2);
	printout(maze2, cnt);
	REQUIRE(cnt == 2);
}