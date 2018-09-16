# Pokémon AI Challenge v1.0

## Description

> A new journey has begun. A kid from Pallet town is ready for a new adventure: collect the eight gym badges and face the Elite Four.

<div style="text-align:center"><img src="https://raw.githubusercontent.com/porthunt/pokemon-ai-challenge/master/img/badges.jpg" alt="8 GYM badges from Kanto region" width="300">
<p style="font-style: italic; font-size: .8em;">Figure 1: Kanto GYM badges.<br/> Design by Nova5. Please check References section.</p>
</div>

The challenge consists of implementing an agent that is capable of moving around the region and acquire this 8 badges in an intelligent way. For this, you need to use A* heuristic search algorithm.

The agent needs to be able to calculate automatically the best route to find the 8 gym badges and finally move to the Elite Four.

The Kanto region map is shown below:

<div style="text-align:center"><img src="https://raw.githubusercontent.com/porthunt/pokemon-ai-challenge/master/img/map.jpg" alt="Kanto region map.">
<p style="font-style: italic; font-size: .8em;">Figure 2: Kanto region map.</p>
</div>

The region is formed by the following terrains, with different costs:

| Color | Name        | Identifier | Cost        |
|-------|-------------|------------|-------------|
|![#d9ead3](https://placehold.it/20/d9ead3/000000?text=+) `#d9ead3`       | GRASS       | G          | +1          |
|![#d9d9d9](https://placehold.it/20/d9d9d9/000000?text=+) `#d9d9d9`       | CEMENT      | C          | +1          |
|![#cb7f31](https://placehold.it/20/cb7f31/000000?text=+) `#cb7f31`       | GROUND      | T          | +1          |
|![#fff2cc](https://placehold.it/20/fff2cc/000000?text=+) `#fff2cc`       | SAND        | S          | +3          |
|![#93c47d](https://placehold.it/20/93c47d/000000?text=+) `#93c47d`       | HIGH GRASS  | H          | +5          |
|![#6d9eeb](https://placehold.it/20/6d9eeb/000000?text=+) `#6d9eeb`       | WATER       | W          | +5          |
|![#783f04](https://placehold.it/20/783f04/000000?text=+) `#783f04`       | MOUNTAIN    | M          | NO TRESPASS |
|![#999999](https://placehold.it/20/999999/000000?text=+) `#999999`       | BARRIER     | B          | NO TRESPASS |
|![#274e13](https://placehold.it/20/274e13/000000?text=+) `#274e13`       | DEEP FOREST | D          | NO TRESPASS |

The best route to get the gym badges is the one that costs the least, considering the terrains.

Your eyesight can see up to one space in front of you:

<div style="text-align:center"><img src="https://raw.githubusercontent.com/porthunt/pokemon-ai-challenge/master/img/eyesight.jpg" alt="Kanto region map.">
<p style="font-style: italic; font-size: .8em;">Figure 3: Character’s eyesight.</p>
</div>

## Additional Information

* The region must be represented in a 36x36 matrix like Figure 2.

* The agent starts at the PURPLE (![#9900ff](https://placehold.it/15/9900ff/000000?text=+) `#9900ff`) area (Pallet Town) and ends at the RED (![#ff0000](https://placehold.it/15/ff0000/000000?text=+) `#ff0000`) area (Elite Four).

* The agent can move using vertical and horizontal movements, no diagonal movement allowed.

* The GYM badges are distributed in it’s own town, but that information is unknown to the agent.

* There must be a way to show the path that the agent used (real time + final map).

* The region needs to be configurable, so we can change to other regions in the future (Johto, Hoenn, Kalos, etc.). Reading from a text file is the best idea.

* The program needs to show in real time the cost.

* You can implement this agent in the language that you prefer.

## Tips

* Split the search process in two steps:
  * (1) Explore the map. The agent must explore the map till it’s eyesight localizes a gym badge.

  * (2) Collect the GYM badge. When a GYM badge is found, the agent must execute the A* algorithm to find the route with the minor cost to reach the badge.

* The easiest way to explore the map is defining some points that it is possible to guarantee that the entire map is reachable. During execution time, you need to execute the search algorithm to reach these points.

* In case that more than one badge is found by your eyesight, you need to calculate the best route and the best order to reach these badges.

## References

* This challenge is based on a college work from Pontifícia Universidade Católica do Rio de Janeiro (PUC-Rio) - Artificial Intelligence.

* The design from Nova5 comes from [TeePublic website](https://www.teepublic.com/t-shirt/2100594-pokemon-kanto-gym-badges).
