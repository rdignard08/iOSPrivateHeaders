
@interface NSFileWatcherObservations : NSObject {

    BOOL _attributesChanged;
    BOOL _contentsChanged;
    BOOL _deleted;
    BOOL _moved;
    NSString* _lastObservedPath;
    BOOL _didResetPath;
    NSString* _path;
}

 - (id) initWithPath:(id)a ;
 - (void) addAttributeChange;
 - (void) addContentsChange;
 - (void) addDeletion;
 - (void) addDetectedMoveToPath:(id)a ;
 - (void) addAnnouncedMoveToPath:(id)a ;
 - (void) notifyObserver:(@?)a ;
 - (id) description;
 - (void) dealloc;


@end
