pipeline {
    agent { label 'linux' }
    triggers { cron('H H(18-19) * * *') }
    options { buildDiscarder( logRotator( numToKeepStr: '5' ) ) }
    environment {
        ENV = 'CI'
    }
    stages {
        stage('Compile') {
            steps {
                ansiColor('xterm') {
                    sh '''#!/bin/bash
                        chmod +x ./workbench.sh
                        ./workbench.sh g++ TripleX.cpp -o TripleX.out
                    '''
                }
            }
        }
        stage('Run & Test') {
            steps {
                ansiColor('xterm') {
                    sh '''#!/bin/bash
                        ./workbench.sh ./TripleX.out | \
                            grep -q 'Entering TripleX' \
                            || ( echo "Failed asserting 'Entering TripleX'." >&2 && exit 1 )
                    '''
                }
            }
        }
        stage('Clean up') {
            steps {
                ansiColor('xterm') {
                    sh '''#!/bin/bash
                        docker kill tripple-x-workbench
                    '''
                }
            }
        }
    }
    post {
        failure {
            slackSend color: '#FF0000',
            message: "@here Failed: <${env.BUILD_URL}console | ${env.JOB_NAME}#${env.BUILD_NUMBER}>"
        }
        fixed {
            slackSend color: 'good',
            message: "@here Fixed: <${env.BUILD_URL}console | ${env.JOB_NAME}#${env.BUILD_NUMBER}>"
        }
    }
}
