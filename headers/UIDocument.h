
@protocol NSFilePresenter;
@interface UIDocument : NSObject <NSFilePresenter> {

    NSURL* _fileURL;
    NSString* _fileType;
    NSString* _localizedName;
    NSUndoManager* _undoManager;
    NSDate* _fileModificationDate;
    NSObject<OS_dispatch_queue>* _fileAccessQueue;
    NSObject<OS_dispatch_queue>* _openingQueue;
    NSObject<OS_dispatch_semaphore>* _fileAccessSemaphore;
    NSOperationQueue* _filePresenterQueue;
    id _differenceDueToRecentChanges;
    id _differenceSincePreservingPreviousVersion;
    id _differenceSinceSaving;
    NSTimer* _autosavingTimer;
    double _lastSaveTime;
    double _lastPreservationTime;
    id _versionWithoutRecentChanges;
    NSMutableArray* _versions;
    NSLock* _documentPropertyLock;
    id _alertPresenter;
    {__docFlags="inClose"b1"isOpen"b1"inOpen"b1"isAutosavingBecauseOfTimer"b1"versionWithoutRecentChangesIsNotLastOpened"b1"ignoreUndoAndRedoNotifications"b1"editingDisabled"b1"isRegisteredAsFilePresenter"b1"movingFile"b1"savingError"b1"inConflict"b1"needToStopAccessingSecurityScopedResource"b1} _docFlags;
    NSUserActivity* _currentUserActivity;
    NSLock* _activityContinuationLock;
}
@property (atomic, assign, readwrite, getter=_isEditingDisabled, setter=_setEditingDisabled:) NSNumber* editingDisabled;
@property (atomic, assign, readonly) NSURL* fileURL;
@property (atomic, copy, readonly) NSString* localizedName;
@property (atomic, copy, readonly) NSString* fileType;
@property (atomic, copy, readwrite) NSDate* fileModificationDate;
@property (atomic, assign, readonly) NSNumber* documentState;
@property (atomic, retain, readwrite) NSUndoManager* undoManager;
@property (nonatomic, assign, readonly) NSDocumentDifferenceSize* differenceDueToRecentChanges;
@property (nonatomic, assign, readonly) NSDocumentDifferenceSize* differenceSincePreservingPreviousVersion;
@property (nonatomic, assign, readonly) NSDocumentDifferenceSize* differenceSinceSaving;
@property (atomic, copy, readonly) NSURL* presentedItemURL;
@property (atomic, retain, readonly) NSOperationQueue* presentedItemOperationQueue;
@property (atomic, copy, readonly) NSURL* primaryPresentedItemURL;
 + (void) initialize;
 + (id) _fileModificationDateForURL:(id)a;
 + (id) _typeForContentsOfURL:(id)aerror:(^@)b;
 + (void) _finishWritingToURL:(id)awithTemporaryDirectoryURL:(id)bnewContentsURL:(id)cafterSuccess:(BOOL)d;
 + (void) _autosavingTimerDidFireSoContinue:(id)a;
 + (id) _customizationOfError:(id)awithDescription:(id)brecoverySuggestion:(id)crecoveryAttempter:(id)d;

 - (id) localizedName;
 - (id) fileModificationDate;
 - (id) fileType;
 - (id) presentedItemURL;
 - (void) relinquishPresentedItemToReader:(@?)a ;
 - (void) relinquishPresentedItemToWriter:(@?)a ;
 - (void) savePresentedItemChangesWithCompletionHandler:(@?)a ;
 - (void) accommodatePresentedItemDeletionWithCompletionHandler:(@?)a ;
 - (void) presentedItemDidMoveToURL:(id)a ;
 - (void) presentedItemDidChange;
 - (void) presentedItemDidGainVersion:(id)a ;
 - (void) presentedItemDidLoseVersion:(id)a ;
 - (void) presentedItemDidResolveConflictVersion:(id)a ;
 - (void) accommodatePresentedSubitemDeletionAtURL:(id)a completionHandler:(@?)b ;
 - (void) presentedSubitemAtURL:(id)a didMoveToURL:(id)b ;
 - (void) presentedSubitemDidChangeAtURL:(id)a ;
 - (void) presentedSubitemAtURL:(id)a didGainVersion:(id)b ;
 - (void) presentedSubitemAtURL:(id)a didLoseVersion:(id)b ;
 - (void) presentedSubitemAtURL:(id)a didResolveConflictVersion:(id)b ;
 - (id) presentedItemOperationQueue;
 - (id) description;
 - (void) dealloc;
 - (void) updateUserActivityState:(id)a ;
 - (void) restoreUserActivityState:(id)a ;
 - (id) userActivity;
 - (void) setUserActivity:(id)a ;
 - (void) _setFileURL:(id)a ;
 - (void) _applicationWillResignActive:(id)a ;
 - (void) _applicationDidBecomeActive:(id)a ;
 - (void) _unregisterAsFilePresenterIfNecessary;
 - (void) _releaseUndoManager;
 - (void) _performBlockSynchronouslyOnMainThread:(@?)a ;
 - (id) _userInfoForActivityContinuation;
 - (id) _titleForActivityContinuation;
 - (id) _activityTypeIdentifierForCloudDocument:(^B)a ;
 - (BOOL) _documentIsUbiquitous;
 - (void) _invalidateCurrentUserActivity;
 - (id) _userActivityWithActivityType:(id)a ;
 - (void) _reallyManageUserActivity;
 - (void) _setUserActivity:(id)a ;
 - (void) autosaveWithCompletionHandler:(@?)a ;
 - (BOOL) _isInOpen;
 - (void) _setInOpen:(BOOL)a ;
 - (void) _registerAsFilePresenterIfNecessary;
 - (BOOL) readFromURL:(id)a error:(^@)b ;
 - (void) setFileModificationDate:(id)a ;
 - (void) _updateLocalizedName;
 - (void) _setOpen:(BOOL)a ;
 - (void) handleError:(id)a userInteractionPermitted:(BOOL)b ;
 - (void) _clearUserActivity;
 - (void) _manageUserActivity;
 - (void) _performBlock:(@?)a synchronouslyOnQueue:(id)b ;
 - (void) performAsynchronousFileAccessUsingBlock:(@?)a ;
 - (void) _updateConflictState;
 - (void) disableEditing;
 - (void) enableEditing;
 - (void) _sendStateChangedNotification;
 - (BOOL) _isOpen;
 - (void) _setEditingDisabled:(BOOL)a ;
 - (void) setFileType:(id)a ;
 - (void) updateChangeCount:(long long)a ;
 - (void) openWithCompletionHandler:(@?)a ;
 - (BOOL) loadFromContents:(id)a ofType:(id)b error:(^@)c ;
 - (BOOL) writeContents:(id)a toURL:(id)b forSaveOperation:(long long)c originalContentsURL:(id)d error:(^@)e ;
 - (id) savingFileType;
 - (id) fileNameExtensionForType:(id)a saveOperation:(long long)b ;
 - (id) contentsForType:(id)a error:(^@)b ;
 - (id) changeCountTokenForSaveOperation:(long long)a ;
 - (id) fileAttributesToWriteToURL:(id)a forSaveOperation:(long long)b error:(^@)c ;
 - (BOOL) writeContents:(id)a andAttributes:(id)b safelyToURL:(id)c forSaveOperation:(long long)d error:(^@)e ;
 - (void) _finishSavingToURL:(id)a forSaveOperation:(long long)b changeCount:(id)c ;
 - (BOOL) _coordinateWritingItemAtURL:(id)a error:(^@)b byAccessor:(@?)c ;
 - (void) updateChangeCountWithToken:(id)a forSaveOperation:(long long)b ;
 - (BOOL) hasUnsavedChanges;
 - (void) _scheduleAutosaving;
 - (void) _autosaveWithCompletionHandler:(@?)a ;
 - (double) _autosavingDelay;
 - (void) _scheduleAutosavingAfterDelay:(double)a reset:(BOOL)b ;
 - (void) _rescheduleAutosaving;
 - (void) _autosavingCompletedSuccessfully:(BOOL)a ;
 - (void) saveToURL:(id)a forSaveOperation:(long long)b completionHandler:(@?)c ;
 - (void) _saveUnsavedChangesWithCompletionHandler:(@?)a ;
 - (id) differenceSinceSaving;
 - (BOOL) _hasUnsavedChanges;
 - (id) differenceDueToRecentChanges;
 - (id) differenceSincePreservingPreviousVersion;
 - (void) _changeWasUndone:(id)a ;
 - (void) _changeWasRedone:(id)a ;
 - (void) _changeWasDone:(id)a ;
 - (void) setUndoManager:(id)a ;
 - (void) finishedHandlingError:(id)a recovered:(BOOL)b ;
 - (void) _setHasSavingError:(BOOL)a ;
 - (BOOL) _shouldAllowWritingInResponseToPresenterMessage;
 - (BOOL) _isEditingDisabled;
 - (void) revertToContentsOfURL:(id)a completionHandler:(@?)b ;
 - (void) _setInConflict:(BOOL)a ;
 - (void) presentedSubitemDidAppearAtURL:(id)a ;
 - (id) initWithFileURL:(id)a ;
 - (BOOL) _hasSavingError;
 - (BOOL) _isInConflict;
 - (void) _lockFileAccessQueueAndPerformBlock:(@?)a ;
 - (void) _unlockFileAccessQueue;
 - (id) _presentableFileNameForSaveOperation:(long long)a url:(id)b ;
 - (void) closeWithCompletionHandler:(@?)a ;
 - (void) userInteractionNoLongerPermittedForError:(id)a ;
 - (id) _fileOpeningQueue;
 - (id) init;
 - (id) fileURL;
 - (unsigned long long) documentState;
 - (id) undoManager;


@end
