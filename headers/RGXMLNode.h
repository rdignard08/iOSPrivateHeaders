
@protocol RGDataSourceProtocol;
@interface RGXMLNode : NSObject <RGDataSourceProtocol> {

    RGXMLNode* _parentNode;
    NSMutableDictionary* _attributes;
    NSArray* _childNodes;
    NSString* _name;
    NSString* _innerXML;
}
@property (nonatomic, retain, readwrite) NSArray* keys;
@property (nonatomic, weak, readonly) RGXMLNode* parentNode;
@property (nonatomic, assign, readonly) NSMutableDictionary* attributes;
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, retain, readwrite) NSString* innerXML;
@property (nonatomic, assign, readonly) NSArray* childNodes;

 - (id) innerXML;
 - (id) childrenNamed:(id)a ;
 - (void) addChildNode:(id)a ;
 - (void) setInnerXML:(id)a ;
 - (void) .cxx_destruct;
 - (void) setKeys:(id)a ;
 - (void) setValue:(id)a forKey:(id)b ;
 - (id) name;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) keys;
 - (id) valueForKey:(id)a ;
 - (id) valueForKeyPath:(id)a ;
 - (void) setName:(id)a ;
 - (id) attributes;
 - (id) parentNode;
 - (id) childNodes;


@end
