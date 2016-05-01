#include "SearchTree.h"

void SearchTree::destroyTree(Node* &tree) {
	if (tree != NULL) {
		destroyTree(tree->esquerda);
		destroyTree(tree->direita);
		delete (tree);
	}
}

void SearchTree::retrieveItem(Node* tree, ItemType& item, bool& found) const {
	// O metodo publico chamado de retrieveItem ira fazer uma chamada
	// para este metodo. Implemente este metodo de forma recursiva. Para
	// isso que serve o primeiro parametro Node *tree.

	// Voce vai receber um objeto item que serah usado como chave. Apos
	// isso, voce tera que procurar se na sua arvore existe algum noh
	// com essa chave. Se existir, entao voce coloca em "item" (no
	// proprio parametro) o objeto que estava no noh da sua arvore.

	// Use a variavel found para avisar a quem chamou se o objeto item
	// foi alterado ou nao. Em outras palavras, avise em found se o no
	// existe ou nao.

}

void SearchTree::insertItem(Node*& tree, ItemType item) {
	// De forma analoga, os metodos abaixo deverao ser chamados pelos
	// metodos publicos. Os parametros Node*& tree estao ai para voce
	// implementar de forma recursiva.
}

void SearchTree::deleteItem(Node*& tree, ItemType item) {
	// Use este metodo privado apenas para navegar pela arvore ate
	// encontrar o no que voce deseja excluir. Feito isso, chame o
	// metodo deleteNode passando como parametro o no que voce
	// encontrou.

}

void SearchTree::deleteNode(Node*& tree) {
	// Nesse metodo, voce receberah como parametro o no que precisa ser
	// removido. Observe que temos tres casos: (i) o no pode ser uma
	// folha, (ii) o no pode ter um filho e (iii) o no pode ter dois
	// filhos. Caso o no tenha dois filhos, voce deverah chamar o metodo
	// getSuccessor para obter o no que deverah substituir o no atual
	// antes da remocao.

}

void SearchTree::getSuccessor(Node* tree, ItemType& data) {
	// Procure o sucessor do no atual na arvore. Em outras palavras,
	// procure o no mais a esquerda da arvore da direita.
}

