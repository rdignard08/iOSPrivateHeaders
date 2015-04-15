
@protocol NSCoding;
@interface UIProxyObject : NSObject <NSCoding> {

    NSString proxiedObjectIdentifier;
}
 + (void) addMappingFromIdentifier:(id)atoObject:(id)bforCoder:(id)c;
 + (void) addMappings:(id)aforCoder:(id)b;
 + (void) removeMappingsForCoder:(id)a;
 + (^{__CFDictionary=}) proxyDecodingMap;
 + (id) mappedObjectForCoder:(id)awithIdentifier:(id)b;

 - (void) dealloc;
 - (id) proxiedObjectIdentifier;
 - (void) setProxiedObjectIdentifier:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
