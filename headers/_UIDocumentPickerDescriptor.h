
@interface _UIDocumentPickerDescriptor : NSObject {

    BOOL _newlyAdded;
    NSExtension _extension;
}
@property (nonatomic, copy, readonly) NSString* identifier;
@property (nonatomic, copy, readonly) NSString* localizedName;
@property (nonatomic, copy, readonly) NSArray* supportedContentTypes;
@property (nonatomic, assign, readwrite) NSNumber* enabled;
@property (nonatomic, assign, readwrite, getter=isNewlyAdded) NSNumber* newlyAdded;
@property (nonatomic, retain, readwrite) NSExtension* extension;
@property (nonatomic, copy, readonly) NSString* nonUIIdentifier;
@property (nonatomic, retain, readonly) NSString* fileProviderDocumentGroup;
 + (id) pickerOrder;
 + (id) hostBundleID;
 + (id) allPickers;
 + (id) allPickersForMode:(unsigned long long)adocumentTypes:(id)b;
 + (id) enabledPickersForMode:(unsigned long long)adocumentTypes:(id)b;
 + (void) setHostBundleID:(id)a;
 + (id) manageablePickers;
 + (id) defaultPickerIdentifierForMode:(unsigned long long)adocumentTypes:(id)b;
 + (id) descriptorWithIdentifier:(id)a;
 + (void) setCloudEnabledStatus:(char)a;
 + (char) cloudEnabledStatus;
 + (void) setOrderFromPickers:(id)a;

 - (id) localizedName;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (long long) compare:(id)a;
 - (void) setExtension:(id)a;
 - (id) supportedContentTypes;
 - (id) extension;
 - (BOOL) enabled;
 - (BOOL) isNewlyAdded;
 - (void) setNewlyAdded:(BOOL)a;
 - (BOOL) supportsPickerMode:(unsigned long long)a;
 - (id) _extensionValueOfClass:(Class)aforKey:(id)b;
 - (id) _ownBundle;
 - (id) _parentApp;
 - (id) nonUIBundle;
 - (id) fileProviderDocumentGroup;
 - (id) nonUIIdentifier;
 - (id) imageWithScale:(double)a;
 - (id) identifier;
 - (void) setEnabled:(BOOL)a;


@end
