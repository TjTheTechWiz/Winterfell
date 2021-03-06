#pragma once

namespace BlueRapsolEnums {
	enum ShapeType {
		Square,
		Circle
	};

	enum ComponentType {
		Transform,
		Physics,
		Renderer,
		Mobile,
		Controllable,
		Projectile
	};

	enum AxisType {
		None = 0,
		Diagonal = 1,
		Vertical = 2,
		Horizontal = 3
	};

	enum CardinalDirection {
		North,
		South,
		East,
		West,
		Northeast,
		Southeast,
		Southwest,
		Northwest
	};

	enum ObjectType {
		Doodad, //Traversible
		Solid,
		Liquid,
		Playable,
		Enemy,
		PickUp,
		PowerUp
	};
	
	enum TagType {
		NoTag,
		Player,
		Wall,
		Bullet,
		Aesthetic,
		Background,
		Hazard
	};

}