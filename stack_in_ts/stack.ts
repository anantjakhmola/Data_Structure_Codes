interface IStack<T> {
	push(item: T): void;
	pop(): T | undefined;
	peek(): T | undefined;
	size(): number;
}

class Stack<T> implements IStack<T> {
	private storage: T[] = [];

	constructor(private capacity: number = Infinity) {}

	push(item: T): void {
		if (this.size() === this.capacity) {
			throw Error("Stack Overflow");
		}
		this.storage.push(item);
	}

	pop(): T | undefined {
		return this.storage.pop();
	}

	peek(): T | undefined {
		return this.storage[this.size() - 1];
	}

	size(): number {
		return this.storage.length;
	}
}

const stack = new Stack<string>();
stack.push("A");
stack.push("B");

stack.size(); // Output: 2
stack.peek(); // Output: "B"
stack.size(); // Output: 2
stack.pop(); // Output: "B"
stack.size(); // Output: 1
