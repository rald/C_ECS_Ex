#include "Component.h"
#include "Entity.h"
#include "System.h"

#include <memory.h>
#include <stdio.h>



int main(int argumentCount, char **arguments)
{
	World world;
	unsigned int tree1, tree2, box, ghost;

	memset(&world, 0, sizeof(world));

	tree1 = createTree(&world, 5.0f, -3.2f);
	tree2 = createTree(&world, 5.0f, -3.2f);
	box = createBox(&world, 0.0f, 0.0f, 0.0f, 0.0f);
	ghost = createGhost(&world, 10.0f, 4.0f, 0.0f, 0.0f);

	movementFunction(&world);
	renderFunction(&world);

	getchar();

	return 0;
}
