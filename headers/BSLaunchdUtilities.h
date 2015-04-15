
@interface BSLaunchdUtilities : NSObject {

}
 + (id) allJobLabels;
 + (void) deleteJobWithLabel:(id)a;
 + (BOOL) createJobWithLabel:(id)abundleIdentifier:(id)bpath:(id)ccontainerPath:(id)darguments:(id)eenvironment:(id)fstandardOutputPath:(id)gstandardErrorPath:(id)hmachServices:(id)ithreadPriority:(long long)jwaitForDebugger:(BOOL)kdenyCreatingOtherJobs:(BOOL)lrunAtLoad:(BOOL)mdisableASLR:(BOOL)nsystemApp:(BOOL)o;
 + (BOOL) stopJobWithLabel:(id)a;
 + (BOOL) startJobWithLabel:(id)a;
 + (int) pidForLabel:(id)a;
 + (id) labelForPID:(int)a;
 + (unsigned long long) lastExitReasonForLabel:(id)a;
 + (void) deleteAllJobsWithLabelPrefix:(id)a;
 + (id) currentJobLabel;



@end
