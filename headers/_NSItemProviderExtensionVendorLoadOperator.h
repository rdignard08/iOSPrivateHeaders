
@protocol _NSItemProviderLoading;
@interface _NSItemProviderExtensionVendorLoadOperator : NSObject <_NSItemProviderLoading> {

    NSUUID* _identifier;
    NSUUID* _extensionContextIdentifier;
}
@property (nonatomic, copy, readwrite) NSUUID* identifier;
@property (nonatomic, copy, readwrite) NSUUID* extensionContextIdentifier;
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) loadItemForTypeIdentifier:(id)acompletionHandler:(@?)bexpectedValueClass:(Class)coptions:(id)d;
 - (void) loadPreviewImageWithCompletionHandler:(@?)aexpectedValueClass:(Class)boptions:(id)c;
 - (id) initWithExtensionContextIdentifier:(id)a;
 - (id) identifier;
 - (void) setIdentifier:(id)a;
 - (void) setExtensionContextIdentifier:(id)a;
 - (id) extensionContextIdentifier;


@end
