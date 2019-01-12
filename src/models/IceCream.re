[@bs.deriving jsConverter]
type iceCream = {
  id: string,
  name: string,
  description: string,
  rating: option(float),
  image: string
};
/* type IceCream {
	id: ID!
	name: String!
	description: String!
	rating: Float
} */