class Stack {
	constructor() {
		this.items = [];
	}
	push = (element) => this.items.push(element);

	pop = () => {
		if (this.items.length == 0) return "Underflow";
		return this.items.pop();
	};
	peek = () => this.items[this.items.length - 1];

	isEmpty = () => this.items.length == 0;

	display = () => {
		var str = "";
		for (var i = 0; i < this.items.length; i++) str += this.items[i] + " ";
		return str;
	};
}

// A function to test the stack class implementation
const test = () => {
	var stack = new Stack();
	console.log(stack.isEmpty());
	console.log(stack.pop());
	stack.push(10);
	stack.push(20);
	stack.push(30);
	console.log(stack.display());
	console.log(stack.peek());
	console.log(stack.pop());
	console.log(stack.display());
};
test();
