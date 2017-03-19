#include <iostream>

int NUMBER_OF_ROUTERS = 0;


vector<string> readFileAndCreateRouters(ifstream& topologyFile){

    cout << "BEGIN READING FILE" << endl;

    bool hitEndOfFile = false;
    string line;

    // Read in the first line to number of routers
    topologyFile >> NUMBER_OF_ROUTERS;

    // Create the routers here

    vectory<string> networkNodes;
    while(getline(topologyFile, line)){
        if(line.compare("-1") == 0){
            // We have hit end of file
            break;
        } else {
            networkNodes.push_back(line);
        }
    }

    cout << "FILE HAS BEEN READ" << endl;

    return networkNodes;
}

int main(int argc, char* argv[]) {
    if (argc != 2){
        return handleFailure();
    }

    ifstream fileInputStream = argv[1];
    readFile(fileInputStream);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}