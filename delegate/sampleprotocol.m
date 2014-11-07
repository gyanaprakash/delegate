//
//  sampleprotocol.m
//  delegate
//
//  Created by Bsetecip10 on 07/11/14.
//  Copyright (c) 2014 gyana. All rights reserved.
//

#import "sampleprotocol.h"

@implementation sampleprotocol

-(void)startSampleProcess
{
    [NSTimer scheduledTimerWithTimeInterval:3.0 target:self.delegate
                                   selector:@selector(processCompleted) userInfo:nil repeats:NO];
}
@end
