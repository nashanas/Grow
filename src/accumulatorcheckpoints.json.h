// Copyright (c) 2018 The GROWX developers
// Copyright (c) 2018 The GROW developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GROW_ACCUMULATORCHECKPOINTS_JSON_H
#define GROW_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 99,\n"
            "    \"1\": \"8e47657f1402836fabd42c8299f327752deae4bacd6aceabb28851d952ac990a7588536b2d4f892b3d6a31057a60f298f74b91d5e2e4d126e18078748e06a530b51b35ff1a9abd8facb8883b873d0d4fcd61f6661c46405eb72f5f0035842b9e8ae47d4f3bbc6483c1e3da7f87540d848130aa87bed234ce92e582242452860ebb353fb27af09422f21cca35af4faa9bc116c7f5ca3c925e8b39f0b0930fc8212f9773ace05ceea75ec9bd9299c485acfcf2601cee1096bbb4313efa05b71d933e93a61d4477e9ece09141dc6c5b90e2259f6b0ebe01ce21d836917c6d6930ed2344614fe4aebffc2e27460dbccc93a33a6870874032e0d6bb91e67cae5b24e4\",\n"
            "    \"5\": \"1a2e8e8966a63b0901627dc51261df0ab0c8338aea0faa2b4e4d68a3fa45365d471f566828a76d9b5c977a4cc87dde61cd3c1ee99cadd230aef0b061c994c6a34250bb54d7c106d91b7043698774c9328eb83c0b6df6fd1b813db1d00b58856d755b20189161267c6664bc2a6122240c11e3419b8ebff56a0f23f5b21d0e7a2e0906933dea938c5574d0c5f831eadb0d93290aafb168d3713974f63fc642c8cdc956a80786b4fb6bfda10276f1d6f64b95e5d31dc36f4a3ca8d8c96aad87353f5bdf5d0bc40e8c7e4de9f0483803e62dd382dc3c1a6076f3539c985579044bc59887571d8d566cc8f12ac070e4638bb9ce79790f6ddc6f2173d90f9c4c933154\",\n"
            "    \"10\": \"2a33353b78568dfdaf246738ed6c5203a098181579799d7e21c5acbdae7b3915c89d86c267a19dede97d78b127e0e10e7ecdcccf4d811fcfa193ba3989afe9761488ca5c4d921b014d7d5154dca853aeed404f8e98c3bef559aa1de3e3f6f4ebc70db7ddfd4ca1810ea71ef830a44d5fa92ed0c6af5503a55c0ae698ac630867c0ebf30b534c00c9d140fb8c52889badb52b0cf52e97be28323203126ebdde8716cccb979e22680572a552a7d762e6a18e01efcaf01b2132a6ad39a05bdcbab830da5b9a13959cc95aa24bf784fa5ae7a06299ccf689901c689ac85309e7bf8fb7efe98eddeb9729c378b44266cc78f9f5e8691313f43dd33c474139fc12fbef\",\n"
            "    \"50\": \"24974af8c61118ec9b802e698aea9afa50b6380899b1b4471f0e9eb0d2838a186971678ea7599cb71c4306a75467757ec9e9808fd5d70b172bd243ab14faf6103092c328c5a80c0178ca6e402dcaf460a32f6d3217f5cc1a15636a1ad3781d115047e364de4687c3507a0110c4bbcd30b149f3beaf17dcd53066a04d56d442b5bfa99a668620ea0318acc52ced88dca14dd5d7ab883cc540f91ce3d3da60975832f1ba0b9314265ba6c28069418689dcb86b344462a1cffe839d24af21d0d052c275560a87bfc2932902d4503307c375955c1c542073da5870c5ab0d0fc8de01390389bbf221cdbe7aa804a9c056eb6ae0ccabda9cab6765d441e2323ac98e4\",\n"
            "    \"100\": \"c7929c6cee4a015ceefe79799b6ebff0d8fe14a8379ccfd32b0ab5a8eb4c5f344ccdadf1812270475a0994f2b141bc383f27198047282c32dc6491a67252d7a3ae66f972b6b5b42997e2d2341de07c845b6446e7d9f7ee73de57b3052d32fc75bc346623806a6fd911f3ca058697e6c13d5138990aa4a4244876f30ef42fa6c043fc8413c97472795a6c443cc2782ea3fa6c1152a48197efe48e513a8064434bdff62f756886aeccd2a2a416951028fc36cfc02b0f8c456abafc3150c8f031d16861b7686d899dd0b398c24cce2fc76d52e746b0b1c7c7224bd9d203cccf364eed4c840e309ef2f8195430dd9fad46273f76ac4f59f4df66f603cea59b24f7e3\",\n"
            "    \"500\": \"3c1\",\n"
            "    \"1000\": \"3c1\",\n"
            "    \"5000\": \"3c1\"\n"
            "  }\n"
           // "  {\n"
           // "    \"height\": 5470,\n"
           // "    \"1\": \"3c1\",\n"
           // "    \"5\": \"3c1\",\n"
          //  "    \"10\": \"3c1\",\n"
           // "    \"50\": \"3c1\",\n"
          //  "    \"100\": \"3c1\",\n"
          //  "    \"500\": \"3c1\",\n"
         //   "    \"1000\": \"3c1\",\n"
         //   "    \"5000\": \"3c1\"\n"
         //   "  }\n" 
            
            "]";


    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 200,\n"
            "    \"1\": \"3c1\",\n"
            "    \"5\": \"3c1\",\n"
            "    \"10\": \"3c1\",\n"
            "    \"50\": \"3c1\",\n"
            "    \"100\": \"3c1\",\n"
            "    \"500\": \"3c1\",\n"
            "    \"1000\": \"3c1\",\n"
            "    \"5000\": \"3c1\"\n"
            "  },\n"
            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //GROW_ACCUMULATORCHECKPOINTS_JSON_H
