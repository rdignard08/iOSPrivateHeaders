
@interface _UIDictionaryManager : NSObject {

    NSArray _availableDefinitionDictionaries;
}
@property (atomic, assign, readonly) NSArray* availableDefinitionDictionaries;
 + (void) initialize;
 + (id) _filteredDictionaryIDs;
 + (id) assetManager;

 - (void) dealloc;
 - (BOOL) _hasDefinitionForTerm:(id)a;
 - (id) _currentlyAvailableDefinitionDictionaries;
 - (id) _availableDictionaryAssetsUsingRemoteInfo:(BOOL)a;
 - (id) _allAvailableDefinitionDictionariesUsingRemoteInfo:(BOOL)a;
 - (id) _definitionValuesForTerm:(id)a;
 - (id) _availableDictionaryAssets;
 - (id) availableDefinitionDictionaries;
 - (id) init;


@end
