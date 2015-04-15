
@protocol _NSItemProviderLoading;
@interface _NSItemProviderExtensionVendorLoadOperator : NSObject <_NSItemProviderLoading> {

    NSUUID* _identifier;
    NSUUID* _extensionContextIdentifier;
}
@property (nonatomic, copy, readwrite) NSUUID* identifier;
@property (nonatomic, copy, readwrite) NSUUID* extensionContextIdentifier;
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) loadItemForTypeIdentifier:(id)a completionHandler:(@?)b expectedValueClass:(Class)c options:(id)d ;
 - (void) loadPreviewImageWithCompletionHandler:(@?)a expectedValueClass:(Class)b options:(id)c ;
 - (id) initWithExtensionContextIdentifier:(id)a ;
 - (id) identifier;
 - (void) setIdentifier:(id)a ;
 - (void) setExtensionContextIdentifier:(id)a ;
 - (id) extensionContextIdentifier;


@end
