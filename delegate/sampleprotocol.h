//
//  sampleprotocol.h
//  delegate
//
//  Created by Bsetecip10 on 07/11/14.
//  Copyright (c) 2014 gyana. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SampleProtocolDelegate <NSObject>

@required

- (void) processCompleted;

@end

@interface sampleprotocol : NSObject

{
    id<SampleProtocolDelegate> delegate;
}

@property(nonatomic, retain) id delegate;

-(void)startSampleProcess;

@end
