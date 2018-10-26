#ifndef __HASH_NODE_H__
#define __HASH_NODE_H__

template <typename K>
class HashNode
{
	private:
    	K key;
    	std::string G;
		HashNode *next;
		std::string id;

	public:
    	HashNode(const K &key, const std::string G, const std::string id) : key(key), G(G), next(NULL), id(id) { }
		
		~HashNode()
		{
			
		}

		K getKey()
		{
			return this->key;
		}

		std::string getG()
		{
			return this->G;
		}

		std::string getId()
		{
			return this->id;
		}

		HashNode *getNext()
		{
			return this->next;
		}

		void setNext(HashNode *next)
		{
			this->next = next;
		}

};
#endif
