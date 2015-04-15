
@interface LSDocumentProxy : LSResourceProxy {

    BOOL _sourceIsManaged;
    NSString* _name;
    NSString* _typeIdentifier;
    NSString* _MIMEType;
}
 + (id) documentProxyForName:(id)atype:(id)bMIMEType:(id)csourceIsManaged:(BOOL)d;
 + (id) documentProxyForName:(id)atype:(id)bMIMEType:(id)c;

 - ({CGSize=dd}) _defaultStyleSize:(id)a;
 - (^{?=i{CGSize=dd}}) _iconVariantDefinitions:(id)a;
 - (id) MIMEType;
 - (id) iconStyleDomain;
 - (void) bind;
 - (id) initWithName:(id)atype:(id)bMIMEType:(id)csourceIsManaged:(BOOL)d;
 - (id) typeIdentifier;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (BOOL) sourceIsManaged;


@end
