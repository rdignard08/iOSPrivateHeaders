
@protocol NSXMLParserDelegate;
@interface RGXMLSerializer : NSObject <NSXMLParserDelegate> {

    RGXMLNode* _rootNode;
    NSXMLParser* _parser;
    RGXMLNode* _currentNode;
    NSMutableString* _currentString;
}
@property (nonatomic, retain, readwrite) NSXMLParser* parser;
@property (nonatomic, assign, readonly) RGXMLNode* rootNode;
@property (nonatomic, weak, readwrite) RGXMLNode* currentNode;
@property (nonatomic, retain, readwrite) NSMutableString* currentString;

 - (id) initWithParser:(id)a ;
 - (void) setParser:(id)a ;
 - (id) currentNode;
 - (void) setCurrentNode:(id)a ;
 - (id) currentString;
 - (void) setCurrentString:(id)a ;
 - (void) parser:(id)a foundCharacters:(id)b ;
 - (void) parser:(id)a didEndElement:(id)b namespaceURI:(id)c qualifiedName:(id)d ;
 - (void) parser:(id)a didStartElement:(id)b namespaceURI:(id)c qualifiedName:(id)d attributes:(id)e ;
 - (void) parser:(id)a foundCDATA:(id)b ;
 - (id) rootNode;
 - (void) .cxx_destruct;
 - (id) parser;


@end
